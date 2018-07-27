# libftASM
Tasting Assembly language based on Intel 64x bits

First, you must install `nasm` into your x86-64 computers. To do so, run:

`make nasmins`

## Resources

[Introduction to x64 Assembly](https://software.intel.com/en-us/articles/introduction-to-x64-assembly)

[Mac OS X 64 bit ASM](http://dustin.schultz.io/mac-os-x-64-bit-assembly-system-calls.html)

[System call table Linux](https://www.cs.utexas.edu/~bismith/test/syscalls/syscalls32.html)

[GNU](http://gcc.gnu.org/onlinedocs/gcc/Link-Options.html)

Mac OS X or likely BSD has split up the system call numbers into several different "classes." The upper order bits of the syscall number represent the class of the system call, in the case of write and exit, it's SYSCALL_CLASS_UNIX and hence the upper order bits are 2! Thus, every Unix system call will be (0×2000000 + unix syscall #).

I'm taking some time to condense all of the important information I'm getting about
assembly coding into a markdown file. All of my notes are in `notes/` if you want to check it about
