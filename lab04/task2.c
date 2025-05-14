#include <stdio.h>
int main()
{
    int amount;
    printf("enter amount ");
    scanf("%d", &amount);
    int check;
    if (amount <= 500000)
    {
        for (int i = 1; i <= 3; i++)
        {
            check = (7 * amount) / 100;
            amount = amount + check;
            printf("after %d year amount is %d\n", i, amount);
        }
    }
    else
    {
        for (int i = 1; i <= 3; i++)
        {
            check = (10 * amount) / 100;
            amount = amount + check;
            printf("after %d year amount is %d\n", i, amount);
        }
    }
}