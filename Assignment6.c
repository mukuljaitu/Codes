#include <stdio.h>
int main()
{
    int num[12] = {12, 45, 85, 1, 0, 59, 152, 45, 75, 65, 40, 59}, ch, n, m = 0, size, arr[50], sum, new[5];
    printf("\t\t\tWhat Operation you want to perform\n");
    printf("(1)Traversing the array\n");
    printf("(2)Sort array in increasing numbers\n");
    printf("(3)Search an element in array\n");
    printf("(4)Merging an array\n");
    printf("\nEnter your choice here: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Array:\t");
        for (int m = 0; m < 12; m++)
        {

            printf("%d\t", num[m]);
        }
        break;
    case 2:
        for (int i = 0; i < 12; i++)
        {
            for (int j = i + 1; j < 12; j++)
            {
                if (num[i] > num[j])
                {
                    int temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        printf("Array looks like ");
        for (int m = 0; m < 12; m++)
        {

            printf("%d\t", num[m]);
        }
        break;
    case 3:

        printf("Enter number looking for, in the array: ");
        scanf("%d", &n);
        for (int i = 0; i < 12; i++)
        {
            if (num[i] == n)
            {
                printf("%d is present at %d position in array\n", n, i + 1);
                m = 1;
            }
        }
        if (m == 0)
        {
            printf("%d isn't present in array", n);
        }
    case 4:
        printf("To merge an array, you have to create a new array\n");
        printf("Enter size of new array: ");
        scanf("%d", &size);
        arr[size];
        printf("Enter array elements:\n");
        for (int q = 0; q < size; q++)
        {
            printf("arr[%d]= ", q + 1);
            scanf("%d", &arr[q]);
        }
        sum = 12 + size;
        new[sum];
        for (int t = 0; t < 12; t++)
        {
            new[t] = num[t];
        }
        for (int t = 12; t < sum; t++)
        {
            new[t] = arr[t - 12];
        }

        printf("Array looks like ");
        for (int m = 0; m < sum; m++)
        {

            printf("%d\t", new[m]);
        }
        break;
    default:
        printf("Enter a valid choice from 1 to 4");
        break;
    }
    return 0;
}