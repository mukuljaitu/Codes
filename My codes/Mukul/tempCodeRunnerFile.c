#include <stdio.h>
#include <math.h>
int main()
{
    int snumber, count, number, ar[] = {};
    printf("Enter a number: ");
    scanf("%d", &number);
    
    do
    {
        number /= 10;
        ++count;
    } while (number != 0);
    
    for (int i = 1; i < count + 1; i++)
    {
        int n = pow(10, i);
        snumber = number % n;
        ar[i - 1] = snumber * 10 / n;
        number -= snumber;
        printf("%d\n", ar[i - 1]);
    }

    return 0;
}
