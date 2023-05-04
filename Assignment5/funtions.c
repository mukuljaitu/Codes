#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int difference(int a, int b)
{
    return a - b;
}
int product(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of numbers is %d\n", sum(a, b));
    printf("difference of numbers is %d\n", difference(a, b));
    printf("product of numbers is %d\n", product(a, b));
    printf("divide of numbers is %d\n", divide(a, b));
    return 0;
}