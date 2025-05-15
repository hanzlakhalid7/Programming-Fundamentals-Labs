#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int a = rand() % 5 + 1, b = rand() % 5 + 1, c = rand() % 5 + 1, d = rand() % 5 + 1;
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    if (a == b && b == c && c == d)
        printf("all are same");
    else if ((a == b && b == c) || (a == c && c == d) || (a == b && b == d) || (b == c && c == d))
        printf("three are same and one is different ");
    else if ((a == b || a == c || a == d) && (b == c || c == d || b == d))
        printf("two are same and other two are same ");
    else if ((a == b || a == c || a == d) || (b == c || c == d || b == d))
        printf("two are same and other two are different ");
    else
        printf("all are different");
}