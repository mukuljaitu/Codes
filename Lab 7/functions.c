#include<stdio.h>
int main(){
    float flt_sum(float a, float b){
        printf("%f\n", a + b);
    }
    float flt_subtract(float a, float b){
        printf("%f\n", a - b);
    }
    float flt_product(float a, float b){
        printf("%f\n", a * b);
    }
    float flt_divide(float a, float b){
        printf("%f\n", a / b);
    }

    flt_sum(2,3);
    flt_subtract(10,5);
    flt_product(2,5);
    flt_divide(5,2.5);


    return 0;
}
