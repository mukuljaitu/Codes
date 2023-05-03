#include<stdio.h>
int main(){
    float grade;
    printf("Enter your grade: ");
    scanf("%f",&grade);
    printf("Eligible Schoralship amount: ");
    if (grade>90)
    {
        printf("10,000");
    }
    else if (grade>70)
    {
       printf("8000");
    }
    else if (grade>50)
    {
       printf("5000");
    }
    else if (grade>35)
    {
       printf("3000");
    }
    else
    {
        printf("Work hard for Schoralship");
    }
       
    return 0;
}