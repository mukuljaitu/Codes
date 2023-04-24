#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a>b){
        if (a>c){
            printf("%f is greatest among all the numbers",a);
        }
        else{
            printf("%f is greatest among all the numbers",c);
        }
    }
    else if (a<b){
        if (b>c){
            printf("%f is greatest among all the numbers",b);
        }
        else{
            printf("%f is greatest among all the numbers",c);
        }
    }
    return 0;
}