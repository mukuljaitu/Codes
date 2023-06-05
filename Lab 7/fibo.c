#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms in fibonacci you wanna print: ");
    scanf("%d",&n);
    int fibo[n];
    fibo[0]=1;
    fibo[1]=1;
    for(int j=0;j<n-2;j++){
        fibo[j+2] = fibo[j+1] + fibo[j];
    }
    for(int i=0;i<n;i++){
        printf("%d ",fibo[i]);
    }
    return 0;
}
