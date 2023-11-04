#include <stdio.h>
#include <string.h>


int main() {
    
    char name[25]; // bytes
    int age;
    
    printf("\nWhat is your name?");
    // scanf("%s", &name);             //without whitespaces
    fgets(name, 25, stdin);            //with whitespaces #include <string.h>, it adds a new line character
    name[strlen(name)-1] = '\0';       //no new line
    
    printf("\nHow old are you?");
    scanf("%d", &age);
    
    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old.", age);
    
    return 0;
}