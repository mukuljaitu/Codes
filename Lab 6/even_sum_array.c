#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
        if (0 == num[i]%2)
        {
            sum += num[i];
        }
        
    }
    printf("Sum of even numbers entered in array is: %d",sum);

    return 0;
}