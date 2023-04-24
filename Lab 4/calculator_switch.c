#include<stdio.h>
int main(){
    int num1,num2;
    char op;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter operator: ");
    scanf("\n%c",&op);
    printf("Enter second number: ");
    scanf("%d",&num2);

    switch (op)
    {
    case '+':
        printf("%d",num1 + num2);
        break;
    
    case '-':
        printf("%d",num1 - num2);
        break;

    case '*':
        printf("%d",num1 * num2);
        break;

    case '/':
        printf("%d",num1 / num2);
        break;
    
    case '%':
        printf("%d",num1 % num2);
        break;
    default:
        printf("Enter a valid operator");
        break;
    }
    return 0;
}