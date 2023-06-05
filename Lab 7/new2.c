#include<stdio.h>
#include<windows.h>
int main(){
    int a[2][2],b[2][2];
    printf("Enter Matrix A \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Matrix B \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("--------------\n");
    printf("Your Entered Array A is \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("Your Entered Array B is \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Your Arrays are being added");
    for(int i=0;i<4;i++){
            printf(".");
            Sleep(1000);
    }
    printf("\nAddition of above arrays is\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d  ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Multiplication of Arrays is\n");
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",((a[i][0])*(b[0][j])) + ((a[i][1])*(b[1][j])));
        }
        printf("\n");
    }
    return 0;
}
