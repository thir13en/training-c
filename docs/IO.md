# Input / Output

### Standard C library related
`stdio.h`

### OS I/O
When the operating system calls a C program, it is going to look for the `main` function. The return value of this function will be what is returned back to the operating system. If you want the program to complete successfully, you should return `0` back to the OS.

### Skip sequences
```c
\n // new line character
```

### Basic cheatsheet
```c
printf("Message\n");
```