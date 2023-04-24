#include<stdio.h>
int main(){
    int num;
    int h = num%2;
    switch (h)
    {
    case '0':
        printf("You entered an Even number");
        break;

    case '1':
        printf("You entered an Odd number");
        break;   
    default:
        printf("Please enter an integer");
        break;
    }   
    return 0;
}