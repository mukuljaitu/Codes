#include<stdio.h>
int main(){
    float cm;
    printf("Please enter value in centimeters: ");
    scanf("%f",&cm);
    printf("In meters it will be %.2f\n",cm/100);
    printf("In Kilo-meters it will be %f",cm/100000);
    return 0;
}