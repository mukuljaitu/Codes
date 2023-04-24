#include<stdio.h>
int main(){
    int num,num2;
    printf("Enter a 2 digit number: ");
    scanf("%d",&num);
    num2 = num%10;
    num = (num-num2)/10;
    printf("Sum of digits of entered number is: %d", num + num2);
    return 0;
}