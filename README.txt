# PA-1
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
