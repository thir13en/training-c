# Data Types

### Integer
Store a number as a 4 byte space in memory:
```c
int n;
n = 11;
return 0;
```

#### Subtypes
* `short`: 2 bytes
* `long`: 4 bytes (default)
* `longlong`: 8 bytes

```c
short n;
n = 11;
return 0;
```
The range of values of each type is [-2^n-1, (2^n-1)-1]. Remember 1 byte = 8 bits.

#### Signed by default
Whenever you declare an integer it is signed by default, but you can make it unsigned like so:
```c
unsigned int n;
n = 11;
return 0;
```
This, of course, duplicates the amount of numbers you can store in one specific direction: greater than 0;

### Float
Decimal number with 4 bytes of space.

### Double
Decimal number with 8 bytes of space.

### Char
Variable that holds a single character. In C programming we represent a single character with single quotes.
```c
char c = 'c';

return 0;
```

### Strings
There are no strings in C, all that we have is `char[]`.

### Reference
[C data types](https://en.wikipedia.org/wiki/C_data_types)