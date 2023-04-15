#include<stdio.h>
int main(){
    int roll,chem,eng,bec;
    printf("Enter your roll no: ");
    scanf("%d",&roll);
    printf("Enter your Chemistry marks: ");
    scanf("%d",&chem);
    printf("Enter your English marks: ");
    scanf("%d",&eng);
    printf("Enter your BEC marks: ");
    scanf("%d",&bec);
    printf("Roll no %d your total marks is %d",roll,chem+eng+bec);
    return 0;
}