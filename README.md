# kindle home automation

This repo is related to [a project on
hackaday.io](https://hackaday.io/project/7126-kindle-as-a-home-automation-controllersensor) which aims is to guess what is
happening on the Kindle and to react with predefined scenario.

## Past
At the beginning the project was to prove Kindle *could* be a controller for your home automation. You open an ebook, and
your home automation reacts. This is basically what happens on the video of the project.

## Now
Now it is possible to integrate your kindle on the pool of sensors of your home automation.
- It's past 11pm, you've read at least 10 pages and screensaver is about to be displayed ? You are asleep, home automation
turns off the bedside lamp.
- Battery is under 12% ? your kindle sends an alert about that !
- Not opened a book since at least 72h ? … yes an alert :-)

# Build
1. Jailbreak your kindle and get ssh.

Follow theses [steps for Kindle4](http://wiki.mobileread.com/wiki/Kindle4NTHacking).
2. Grab Kindle ToolChain

On a Linux distribution you can use samsheff's:
```
git clone https://github.com/samsheff/Amazon-Kindle-Cross-Toolchain
```
3. Grab this project
```
git clone https://github.com/cekage/kindle-home-automation
```
4. Check on your computer
```
make build
```
5. Compile for kindle

Gives CC the path to kindle toolchain's CC
```
make build CC=/path/to/kindle-tool-chain/bin/cc
```
The file *read_fifo* is the executable for the kindle.
6. upload to kindle

The best place to test is /tmp which is wiped at boot.
```
scp ./read_fifo root@ip.of.the.kindle:/tmp
```
7. simple test
```
$ ssh root@ip.of.the.kindle \
    "cut -d\" \" -f 2- < /var/log/messages | /tmp/read_fifo"
```
You will see something like this:
```
Welcome to Kindle!
root@ip.of.the.kindle's password:
Can't connect: Connection refused
Can't connect: Connection refused
Can't connect: Connection refused
Can't connect: Connection refused

 process_lipcevts MAGIC detected
 process_lipcevts MAGIC detected
 process_lipcevts MAGIC detected
```
Do not care about errors displayed. On contrary errors displayed means it works :-)
8. Adapt
  * Change constant in lib/htmlrequest.h for your home automation adress and port
  * In (each) lib/filter_XXX.h change the format string in the asprintf command of function process_XXXX().
9. Extend

Extend this demo to all the events you want. See how the lib/filter_XXX.h provided works :
  * create a lib/filter_YYY based on one of the filter_XXX provided
  * get the magic of the eventer (cvm, powerd, …)
  * get the magic of the content of the log line
  * extract keys you need
  * build request (see asprintf)
  * do request
  * free unused memory
