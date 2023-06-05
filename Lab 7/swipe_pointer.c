#include<stdio.h>
int main(){
    void swipe(int *x, int *y){
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
    int n1,n2;
    printf("Enter a number to store in n1: ");
    scanf("%d", &n1);
    printf("Enter a number to store in n2: ");
    scanf("%d", &n2);

    swipe(&n1,&n2);

    printf("Swiped numbers are n1 = %d and n2 = %d",n1,n2);
    return 0;
}
