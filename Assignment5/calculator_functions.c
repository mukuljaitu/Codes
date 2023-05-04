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
    int a, b, m;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("--------------Enter Operator choice--------------\n");
    printf("Press '1' for Sum\n");
    printf("Press '2' for Difference\n");
    printf("Press '3' for Product\n");
    printf("Press '4' for Divide\n");
    printf("Which operation you want to do: ");
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        printf("Sum of numbers is %d\n", sum(a, b));
        break;
    case 2:
        printf("difference of numbers is %d\n", difference(a, b));
        break;
    case 3:
        printf("product of numbers is %d\n", product(a, b));
        break;
    case 4:
        printf("divide of numbers is %d\n", divide(a, b));
        break;

    default:
        printf("Enter correct operator");
        break;
    }

    return 0;
}