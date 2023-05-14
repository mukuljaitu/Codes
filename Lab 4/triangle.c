#include<stdio.h>
int main(){
    int a,b,c,large,other;
    printf("Enter sides of a Triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c){
            large = a*a;
            other = b*b + c*c;
        }
        else{
            large = c*c;
            other = b*b + a*a;
        }
    }
    else if (a<b){
        if (b>c){
            large = b*b;
            other = a*a + c*c;
        }
        else{
            large = c*c;
            other = b*b + a*a;
        }
    }
    if (a==b && b==c)
    {
        printf("Your triangle is EQUILATERAL");
    }
    else if(a==b || b==c || c==a){
        printf("Your triangle is ISOSCELES");
    }
    else if(large==other){
        printf("Your triangle is RIGHT ANGELED");
    }
    else{
        printf("Your triangle is SCALENE");
    }
    return 0;
}
