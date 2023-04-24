#include<stdio.h>
int main(){
    char a;
    printf("Enter any character, digit or special key: ");
    scanf("%c", &a);
    if ((a>='a' && a<='z')||(a>='A' && a<='Z'))
    {
        printf("You entered an Alphabet");
    }
    else if (a>='0' && a<='9')
    {
        printf("You entered a Digit");
    }
    else
    {
        printf("You entered a special Character");
    }
    return 0;
}