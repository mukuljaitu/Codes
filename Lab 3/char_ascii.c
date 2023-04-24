#include<stdio.h>
int main(){
    char a;
    printf("Enter any character, digit or special key: ");
    scanf("%c", &a);
    if (a>=65 && a<=90)
    {
        printf("You entered a Capital Alphabet");
    }
    else if (a>=97 && a<=122)
    {
        printf("You entered a Small Alphabet");
    }
    else if (a>=48 && a<=57)
    {
        printf("You entered a Mathematical Digit");
    }
    else
    {
        printf("You entered a Special character");
    }
    
    return 0;
}