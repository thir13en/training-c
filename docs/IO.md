# Input / Output

### Standard C library related
`stdio.h`

### OS I/O
When the operating system calls a C program, it is going to look for the `main` function. The return value of this function will be what is returned back to the operating system. If you want the program to complete successfully, you should return `0` back to the OS.

### Skip sequences
```c
\n // new line character
```

### Output to terminal
```c
// Print string value
printf("Message\n");

// Print with format specifiers
int id = 5;
int age = 33;
printf("%d\n", id);
// You can combine with strings
printf("The content of id is %d\n", id);
// You can also have several parameters
printf("The content of id is %d, age = %d\n", id, age);
```
You can check the code corresponding to the different `format identifiers` in [C data types](https://en.wikipedia.org/wiki/C_data_types)

### Input from terminal
```c
#include <stdio.h>

int main() {
	int age;

	printf("What is your age?\n");
	// This will read from the input
	// scanf cannot access the age variable but can understand that we are sending an address where
	// the value is stored to read from
	scanf("%d", &age);

	return 0;
}