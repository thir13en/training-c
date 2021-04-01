# Basics

### Hello World
```c
#include <stdio.h>

int main() {
	printf("Hello World!\n");
	return 0;
}
```
Operating System assumes the entry point of our C program is the `main` function.

### Variable names
They can not start with a digit. The convention is separate words with lodash. Variable names and values are only accessible from within their own local scope.

### Obtain the address of any stored value
You achieved it by pre-pending ampersand to the variable name;
```c
#include <stdio.h>

int main() {
	int foo = 0;

	// Print out the address where 0 is located
	printf("%d\n", &foo);
	return 0;
}
```