# filecat
To compile, run 
## Output from Strace
```
execve("./filecat", ["./filecat"], [/* 47 vars */]) = 0
brk(NULL)                               = 0x1f73000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fbc7788d000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
open("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=84185, ...}) = 0
mmap(NULL, 84185, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fbc77878000
close(3)                                = 0
open("/lib64/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\20&\2\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0755, st_size=2156160, ...}) = 0
mmap(NULL, 3985888, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fbc7729f000
mprotect(0x7fbc77462000, 2097152, PROT_NONE) = 0
mmap(0x7fbc77662000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1c3000) = 0x7fbc77662000
mmap(0x7fbc77668000, 16864, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fbc77668000
close(3)                                = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fbc77877000
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fbc77875000
arch_prctl(ARCH_SET_FS, 0x7fbc77875740) = 0
mprotect(0x7fbc77662000, 16384, PROT_READ) = 0
mprotect(0x600000, 4096, PROT_READ)     = 0
mprotect(0x7fbc7788e000, 4096, PROT_READ) = 0
munmap(0x7fbc77878000, 84185)           = 0
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 0), ...}) = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fbc7788c000
write(1, "You must include an input and an"..., 58You must include an input and an output file as arguments
) = 58
exit_group(1)                           = ?
+++ exited with 1 +++
```
