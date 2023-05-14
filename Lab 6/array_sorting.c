#include <stdio.h>
int main()
{
    int arr[5] = {0};
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array looks like ");
    for (int m = 0; m < 5; m++)
    {

        printf("%d ", arr[m]);
    }

    return 0;
}
