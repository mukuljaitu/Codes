#include<stdio.h>
#define PI 3.14
float area(float x){
    return PI*x*x;
}
float circumfrance(float x){
    return PI*2*x;
}

int main(){
    printf("Area is %f\n", area(5));
    printf("Circumfrance is %f\n", circumfrance(56));
    return 0;
}
