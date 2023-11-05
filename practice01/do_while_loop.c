#include <stdio.h>


int main() {
    
    // while loop = first checks a condition, then executes a block of code if the condition is true
    // do while loop = always executes a block of code once, then check the conditions
    
    int number = 0;
    int sum = 0;
    
    do{
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
      }while(number > 0);
    
    printf("sum: %d", sum);
    
    return 0;
}