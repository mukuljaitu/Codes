#include<stdio.h>
int main(){
    float sp,cp;
    printf("Enter Cost Price: ");
    scanf("%f",&cp);
    printf("Enter Selling Price: ");
    scanf("%f",&sp);
    if (cp>sp)
    {
        printf("Alas! You are having a loss of %f", cp-sp);
    }
    else if (sp>cp)
    {
        printf("Wow! You are having a profit of %f", sp-cp);
    }
    else
    {
        printf("Need to learn more! You are having a no profit no loss deal");
    }
    return 0;
}