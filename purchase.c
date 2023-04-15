#include<stdio.h>
int main(){
    float a,d;
    printf("Enter purchase amount: ");
    scanf("%f",&a);
    if (a>5000)
    {
        d=a - (a/10);
        printf("Discounted price is: %f",d);
    }
    else if (3000<a && a<5000)
    {
        d=a - (a/20);
        printf("Discounted price is: %f",d);
    }
    else if (a<3000)
    {
        d=a - (a/50);
        printf("Discounted price is: %f",d);
    }   
    return 0;
}