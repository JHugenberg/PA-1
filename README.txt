i# PA-1
ALL SUBMISSION FILES CAN ALSO BE FOUND AT: https://github.com/JHugenberg/PA-1

Student: Jake Huegnberg
Email: jahu7495@colorado.edu
Phone: 303-886-8877
Files:
  cs3753.c contains the C code to add up the two numbers with the given parameters. It sits under the kernel file 
  The Makefile contains the added code so that the build system can handle the new kernel call. This also sits under the kernel file.
  syscall_64.tbl contains the number value assosiated with eash system call. I added 2 sys calls or 2 numbered lines of code. This appropriatly is found in syscalls as it defines the calls.
  syscalls.h defines the functions used to opperate when a syscall is activated. This is found under linux as it talks directly to the linux machine.
  numTest.c tests the number addition syscall. It sits under linux-hwe-4.15.0
  testHello.c tests the hello world system call. It sits under linux-hwe-4.15.0
Testing:
The test files are ready and do not need to be changed from what is already incoded
I first typed into the command line:     gcc numTest.c -o cs3753.o && ./cs3753.o
then: dmsg (to print out the desired output)
Notes:
I also have time stamped pitctures of some of my work and pictures of final outputs of my terminal. They are there to use if needed.
I had no "var" folder in my file tree so in this submission there is no file coming from  /var/log/syslog
