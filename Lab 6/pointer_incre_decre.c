#include <stdio.h>
int main()
{
    int myAge = 43;
    int *ptr = &myAge;

    printf("Increment of pointer is: %p\n",++ptr);
    printf("Decrement of pointer is: %p",--ptr);
    return 0;
}