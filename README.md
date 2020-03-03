# Assignment 1 - File Concatenate Program
Matt Raymond  
2270559  
raymo116@mail.chapman.edu

## Contents
`README.md` - Overview of project and basic instructions  
`Resources.md` - A list of all of the websites and resources used for this assignment  
`filecat.c` - The source code for the assignment  
`from.txt` - An example source file  
`to.txt` - An example destination file

## Instructions

To compile the program, enter the command `gcc filecat.c -o filecat` in the terminal. To run the program, enter `./filecat <source_file> <desintation_file>`.

To run both at once, enter `gcc filecat.c -o filecat && ./filecat <source_file> <desintation_file>`.

You must include both a source file and a destination file, or the program will throw an error.

## Output from Strace
Here is an example of what the `strace` command returns for this program  
```
execve("./filecat", ["./filecat", "from.txt", "to.txt"], [/* 47 vars */]) = 0
brk(NULL)                               = 0xe28000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f87c8e7e000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
open("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=84185, ...}) = 0
mmap(NULL, 84185, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f87c8e69000
close(3)                                = 0
open("/lib64/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\20&\2\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0755, st_size=2156160, ...}) = 0
mmap(NULL, 3985888, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f87c8890000
mprotect(0x7f87c8a53000, 2097152, PROT_NONE) = 0
mmap(0x7f87c8c53000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1c3000) = 0x7f87c8c53000
mmap(0x7f87c8c59000, 16864, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f87c8c59000
close(3)                                = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f87c8e68000
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f87c8e66000
arch_prctl(ARCH_SET_FS, 0x7f87c8e66740) = 0
mprotect(0x7f87c8c53000, 16384, PROT_READ) = 0
mprotect(0x600000, 4096, PROT_READ)     = 0
mprotect(0x7f87c8e7f000, 4096, PROT_READ) = 0
munmap(0x7f87c8e69000, 84185)           = 0
access("from.txt", R_OK)                = 0
access("to.txt", W_OK)                  = 0
open("from.txt", O_RDONLY)              = 3
open("to.txt", O_WRONLY|O_APPEND)       = 4
brk(NULL)                               = 0xe28000
brk(0xe49000)                           = 0xe49000
brk(NULL)                               = 0xe49000
read(3, "r", 1)                         = 1
write(4, "r", 1)                        = 1
read(3, "e", 1)                         = 1
write(4, "e", 1)                        = 1
read(3, "s", 1)                         = 1
write(4, "s", 1)                        = 1
read(3, "u", 1)                         = 1
write(4, "u", 1)                        = 1
read(3, "l", 1)                         = 1
write(4, "l", 1)                        = 1
read(3, "t", 1)                         = 1
write(4, "t", 1)                        = 1
read(3, "\n", 1)                        = 1
write(4, "\n", 1)                       = 1
read(3, "", 1)                          = 0
close(3)                                = 0
close(4)                                = 0
exit_group(0)                           = ?

```
