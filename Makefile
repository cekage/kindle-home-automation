# Projet compter et afficher les lignes d'un fichier

CC = cc
CC_OPTIONS =  -Werror -Wall -ggdb -pedantic -std=c99 -O0 -fno-stack-protector -lm
TGT = read_fifo

all: init astyle build run

clean:
	rm $(TGT)

build:
	 $(CC) $(CC_OPTIONS) $(TGT).c -o  $(TGT)

run:
	./$(TGT) < Docs/kindle.log

debug: build
	gdb ./$(TGT)

astyle:
	 #astyle --style=java -j -n --indent=spaces -Y -m0 -p -k1 -W1 -J -xe -H -xW $(TGT).c
	 astyle --style=java --add-brackets --suffix=none --indent=spaces \
	 		--indent-col1-comments --min-conditional-indent=0 --pad-oper \
	 		--align-pointer=type --align-reference=type --add-one-line-brackets \
	 		--delete-empty-lines --pad-header  $(TGT).c
	astyle -k1 -W1 -A2 -s4 -j -xc -K -Y -p -H -xe -xy -q -xp -xL -z2 -c -xC80 $(TGT).c lib/filter*.h test/*.c

init:
	sync
	export LC_ALL="C"

check: build cppcheck splint

cppcheck:
	cppcheck --std=c99 --enable=all $(TGT).c

splint:
	#splint +posixstrictlib -unqualifiedtrans -compdef -retvalint $(TGT).c
	splint -compdestroy +posixstrictlib -unqualifiedtrans -compdef -globs -formatcode -preproc $(TGT).c

test: build
	valgrind -v --track-origins=yes --leak-check=full --error-exitcode=1 ./$(TGT) < Docs/kindle.log > /dev/null 2>&1
	make -C test test TGT=test_filter
	make -C test test TGT=test_soc_stat
	make -C test test TGT=test_iface_stat
	make -C test test TGT=test_partition_stat

stat:
	#cccc --lang=c  --outdir=/tmp/ lib/*.h $(TGT).c 
	cccc --lang=c  --outdir=/tmp/ lib/*.?  
