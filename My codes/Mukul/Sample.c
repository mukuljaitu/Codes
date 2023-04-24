#include <stdio.h>
#include <math.h>
int main()
{
    int snumber,  number = 5132,ar[] = {0,0,0,0};
    /* First number */
    int n = pow(10, 1);
    snumber = number % n;
    ar[1 - 1] = snumber * 10 / n;
    number -= snumber;
    printf("%d\n", ar[1 - 1]);
   // printf("I am new %d\n", number);

    //  Second number
    n = pow(10, 2);
    snumber = number % n;
    ar[2 - 1] = snumber * 10 / n;
    number -= snumber;
    printf("%d\n", ar[2 - 1]);
    //printf("I am new %d\n", number);

    //Third number
    n = pow(10, 3);
    snumber = number % n;
    //printf("I am snumber %d\n", snumber );
     ar[3 - 1] = snumber * 10 / n;
     number -= snumber;
    printf("%d\n", ar[3 - 1]);
    // printf("I am new %d\n", number);

    // Forth number
    n = pow(10, 4);
    snumber = number % n;
    ar[4 - 1] = snumber * 10 / n;
    number -= snumber;
    printf("%d\n", ar[4 - 1]);

    return 0;
}

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int snumber, number = 1234, ar[] = {0, 0, 0, 0};
//     /* First number */
//     for (int i = 1; i < 5; i++)
//     {
//         int n = pow(10, i);
//         snumber = number % n;
//         ar[i - 1] = snumber * 10 / n;
//         number -= snumber;
//         printf("%d\n", ar[i - 1]);
//     }

//     return 0;
// }
// Working not alone