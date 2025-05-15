#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    srand(time(0));
    int n = rand() % 9 + 1;
    int n1 = rand() % 9 + 1;
    int c = rand() % 3 + 1;
    int m, sum = n + n1, dif = n - n1, pro = n * n1;
    printf("FIRST NUMBER : %d\nSECOND NUMBER : %d\n", n, n1);
    if (c == 1)
    {
        printf("ENTER SUM : ");
        scanf("%d", &m);
        if (m == sum)
            printf("correct ");
        else
            printf("incorrect");
    }
    else if (c == 2)
    {
        printf("ENTER DIFFRENCE : ");
        scanf("%d", &m);
        if (m == dif)
            printf("correct ");
        else
            printf("incorrect");
    }
    else if (c == 3)
    {
        printf("ENTER PRODUCT : ");
        scanf("%d", &m);
        if (m == pro)
            printf("correct ");
        else
            printf("incorrect");
    }
}