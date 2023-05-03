#include<stdio.h>
int main(){
    char a;
    printf("Enter any character, digit or special key: ");
    scanf("%c", &a);
    if ((a>='a' && a<='z'))
    {
        printf("You entered a Small alphabet");
    }
    else if (a>='A' && a<='Z')
    {
        printf("You entered a Capital alphabet");
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