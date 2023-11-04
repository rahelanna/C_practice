#include <stdio.h>
#include <string.h>


int main() {
    
    char string1[] = "Bro";
    char string2[] = "Code";
    
    // strlwr(string1);             // converts a string to lowercase
    // strdup(string1);             // converts a string to uppercase
    // strcat(string1, string2);    // appends string2 to end of string1
    // strncat(string1, string2, 1);// appends n characters from string2 to string1
    // strcpy(string1, string2);    // copy string2 to string1
    // strncpy(string1, string2, 4);   // copy n characters of string2 to string1
    
    //printf("%s", string1);
    
    // int result = strlen(string1);            // returns string length as int
    // int result = strcmp(string1, string2);   // string compare all characters
    // int result = strncmp(string1, string2, 1);// string compare n characters
    // int result = strcmpi(string1, string1);  // string combare all (ignore case)
    // int result = strnismp(string1, string1, 1);  // string compare n charecters (ignore case)
    
    //printf("%d", result);

    if(result == 0){
        printf("These strings are the same.");
    }
    else{
        printf("These strings are not the same.");
    }
}