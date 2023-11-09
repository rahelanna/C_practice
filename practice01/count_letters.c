#include<stdio.h>

int main(){

    char str[20];
    int i=0;
    int countLetter;

    printf("\nEnter the string: ");

    gets(str);

    while(str[i]!='\0')
        {
        if(str[i] != ' ')
        {
            countLetter += 1;
        }
        i++;
        }
    printf("\nLength of [ %s ] is [ %d ]\n", str, countLetter - 1);

    return 0;
}