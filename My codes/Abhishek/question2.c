#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    printf("Enter a value for integer:");
    scanf("%d",&a);
    printf("Enter a value for float:");
    scanf("%f",&b);
    printf("Enter a value for Character:");
    scanf("\n%c",&c);
    printf("I am the integer entered: %d\n",a);
    printf("I am the float entered: %.2f\n",b);
    printf("I am the character entered: %c",c);
    return 0;
}