#include <stdio.h>
int main()
{
    int num;
    printf("Enter any year: ");
    scanf("%d", &num);
    if(!(1000<num && num<5000))
    {
        printf("Please enter a valid year");
    }
    else if (0 == num % 4)
    {
        printf("Entered year is a leap year");
    }
    else
    {
        printf("Entered year is not a leap year");
    }

    return 0;
}