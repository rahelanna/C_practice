#include <stdio.h>
#include <string.h>


int main() {
    
    char x[15] = "water";    //if the first string is longer that the second, it can cause an unexpected behaviour
    char y[15] = "soda";    // solution: set the character arrays to the same size
    char temp[12];
    
    strcpy(temp, x);  
    strcpy(x, y);
    strcpy(y, temp);
    
    printf("x = %s\n", x);
    printf("y = %s\n", y);
    
    return 0;
}