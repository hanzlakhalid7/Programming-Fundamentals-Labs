#include <stdio.h>
const char *a[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
const char *b[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twenty"};
const char *c[] = {"zero", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty", "hundered"};
const char *d[] = {"zero", "ten", "hundred", "thousand", "million", "billion"};
int hundred(int num1)
{
    int x, y;
    if (num1 <= 10)
    {
        printf("%s", a[num1]);
    }
    else if (num1 <= 20)
    {
        printf("%s", b[num1 - 10]);
    }
    else if (num1 > 20)
    {
        x = num1 / 10;
        y = num1 % 10;
        if (y == 0)
        {
            printf("%s", c[y]);
        }
        else
        {
            printf("%s", c[y]);
            printf("%s", a[x]);
        }
    }
}
int main()
{
    int num1;
    printf("enter number");
    scanf("%d", &num1);
    hundred(num1);
}
