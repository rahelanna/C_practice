#include <stdio.h>

void hello(char[], int); // function prototype

int main() {
    
    // function prototype
    
    // Function declaration w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments
    
    // Many C compliers do not check for parameters matching
    // Missing arguments will result in unespected behavior
    // A function prototype causes the complier to flag an error if arguments are missing
    
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files
    
    char name[] = "Carlos";
    int age = 20;
    
    hello(name, age);
    
    return 0;
}


void hello(char name[], int age){
    printf("\nHello %s!", name);
    printf("\nYou are %d years old.", age);
}