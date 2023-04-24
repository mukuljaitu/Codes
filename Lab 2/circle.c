#include<stdio.h>
#define PI 3.14
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Diameter of Circle will be: 2*r = %f\n",2*r);
    printf("Circumfrance of Circle will be: 2*PI*r = %f\n",2*PI*r);
    printf("Area of Circle will be: PI*r*r = %f\n",PI*r*r);
    return 0;
}