#include <stdio.h>
#include <string.h>

void printAge(int *pAge)
{
   printf("You age %d age years old\n", *pAge);
}

int main()
{
   // pointers = a "variable-like" reference that holds a memory address to another variable, array, etc.
   //            some tasks are performed more easily with pointers
   //            * = indirection operator (value at address)

   int age = 21;
   int *pAge = NULL; // good practice to assign NULL if declaring a pinter
   pAge = &age;
 
   /* printf("address of age: %p\n", &age);
   printf("value of pAge: %p\n", pAge);

   printf("size of age: %d bytes\n", sizeof(age));
   printf("size of pAge: %d bytes\n", sizeof(pAge));

   printf("value of age: %d\n", age);
   printf("value at stored address: %d\n", *pAge); */

   printAge(age);

   return 0;
}