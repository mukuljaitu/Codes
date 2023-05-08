#include <stdio.h>
int main()
{
    int marks[5] = {0};
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
    int total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    int average = total / 5;
    printf("Total marks: %d\n", total);
    printf("Average marks: %d", average);
    return 0;
}