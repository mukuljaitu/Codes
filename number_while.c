#include <stdio.h>
int main()
{
    int number, i = 0, ar[11];
    printf("Enter any number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        int rem = number % 10;
        ar[i] = rem;
        printf("%d\n", ar[i]);
        number = number / 10;
        ++i;
    }

    return 0;
}