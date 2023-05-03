#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter a 4 digit number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        int rem = number % 10;
        sum+=rem;
        number = number / 10;
    }
    printf("Sum of digits is: %d",sum);
    return 0;
}