#include <stdio.h>
#include <string.h>

int main()
{

// memory = an array of bites within RAM (street)
// memory block = a single unit (byte) within meory, used to hold some value (person)
// memory address = the address of where a memory block is located (house address)


// try with diffenet data types
char a = 'X';
char b = 'Y';
char c = 'Z';

printf("%d bytes\n", sizeof(a));
printf("%d bytes\n", sizeof(b));
printf("%d bytes\n", sizeof(c));

printf("%p\n", &a);
printf("%p\n", &b);
printf("%p\n", &c);

   return 0;
}