# libftASM
Tasting Assembly language based on Intel x64 bits

First, you must install _Netwide Assembler: NASM_. NASM is a powerful low level language close to machine code into your x86-64 computers. To do so, run:

`make nasmins`

## Resources

[Beginners guide](https://en.wikibooks.org/wiki/X86_Assembly)

[Bible](http://www.intel.com/content/dam/www/public/us/en/documents/manuals/64-ia-32-architectures-software-developer-manual-325462.pdf)

[Condition Intructions](https://stackoverflow.com/questions/9617877/assembly-jg-jnle-jl-jnge-after-cmp)

[Effective Addresses](https://www.tortall.net/projects/yasm/manual/html/nasm-effaddr.html)

[GNU](http://gcc.gnu.org/onlinedocs/gcc/Link-Options.html)

[JUMP Quick Reference](http://unixwiz.net/techtips/x86-jumps.html)

[Intel Pentium Instruction Set Reference (Basic Architecture Overview)](http://faydoc.tripod.com/cpu/movsb.htm)

[Introduction to x64 Assembly](https://software.intel.com/en-us/articles/introduction-to-x64-assembly)

[Mac OS X 64 bit ASM](http://dustin.schultz.io/mac-os-x-64-bit-assembly-system-calls.html)

[Malloc in ASM](https://www.cs.uaf.edu/2010/fall/cs301/lecture/10_04_malloc.html)

[RIP](https://stackoverflow.com/questions/31234395/why-use-rip-relative-addressing-in-nasm)

[System call table Linux](https://www.cs.utexas.edu/~bismith/test/syscalls/syscalls32.html)

[The Netwide Assembler: NASM](https://www.nasm.us/doc/nasmdoc0.html)

[Understanding C by learning Assembly](https://www.recurse.com/blog/7-understanding-c-by-learning-assembly)

[rep movs](https://stackoverflow.com/questions/43343231/enhanced-rep-movsb-for-memcpy/43574756#43574756)

Mac OS X or likely BSD has split up the system call numbers into several different "classes." The upper order bits of the syscall number represent the class of the system call, in the case of write and exit, it's SYSCALL_CLASS_UNIX and hence the upper order bits are 2! Thus, every Unix system call will be (0×2000000 + unix syscall #).

I'm taking some time to condense all of the important information I'm getting about
assembly coding into a markdown file. All of my notes are in `notes/` if you want to check it about

## Plans
- [ ] Linked Lists
- [ ] DLL
- [ ] Reverse Engineering
