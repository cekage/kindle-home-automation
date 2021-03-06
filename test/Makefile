# Projet compter et afficher les lignes d'un fichier

CC = cc
CFLAGS = -Werror -Wall -ggdb -pedantic -std=c99 -O0 -lm
TGT = test_filter


all: init astyle build run

clean:
	rm $(TGT)

build:
	 $(CC) $(CFLAGS) $(TGT).c -o  $(TGT)

run:
	./$(TGT)

debug: build
	gdb ./$(TGT)

astyle:
	 #astyle --style=java -j -n --indent=spaces -Y -m0 -p -k1 -W1 -J -xe -H -xW $(TGT).c
	 astyle --style=java --add-brackets --suffix=none --indent=spaces \
	 		--indent-col1-comments --min-conditional-indent=0 --pad-oper \
	 		--align-pointer=type --align-reference=type --add-one-line-brackets \
	 		--delete-empty-lines --pad-header  $(TGT).c

init:
	sync
	export LC_ALL="C"

check: build cppcheck splint

cppcheck:
	cppcheck --std=c99 --enable=all $(TGT).c

splint:
	#splint +posixstrictlib -unqualifiedtrans -compdef -retvalint $(TGT).c
	splint -compdestroy +posixstrictlib -unqualifiedtrans -compdef -globs -formatcode $(TGT).c

test: build run
	valgrind -v --track-origins=yes --leak-check=full --error-exitcode=1 ./$(TGT) > /dev/null 2>&1

coverage:
	rm $(TGT).???? || echo "ok"
	$(CC) $(CFLAGS) --coverage  $(TGT).c -o  $(TGT)
	./$(TGT) > /dev/null
	gcov $(TGT).c
	lcov -o $(TGT).info -c -f -d .
	genhtml -o coveragereport $(TGT).info
	
