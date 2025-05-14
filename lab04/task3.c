#include <stdio.h>
int main()
{
    int base;
    int tax = 0;
    printf("enter base salary ");
    scanf("%d", &base);
    int medical = (10 * base) / 100;
    int convency = (15 * base) / 100;
    int hrent = (45 * base) / 100;
    int gross = base + medical + convency + hrent;
    int anunall_g = 12 * gross;
    if (anunall_g <= 200000)
        tax = 0;
    else if (anunall_g <= 400000)
        tax = (10 * anunall_g) / 100;
    else if (anunall_g <= 600000)
        tax = (15 * anunall_g) / 100;
    else if (anunall_g <= 800000)
        tax = (20 * anunall_g) / 100;
    else if (anunall_g > 800000)
        tax = (25 * anunall_g) / 100;
    int net;
    int month_tax = tax / 12;
    net = gross - month_tax;
    printf("basic salary %d\n", base);
    printf("medical allowances %d\n", medical);
    printf("conveyance allowances %d\n", convency);
    printf("_______________________\n");
    printf("house rent %d\n", hrent);
    printf("Gross salary %d\n", gross);
    printf("less tax %d\n", month_tax);
    printf("_______________________\n");
    printf("net salary %d\n", net);
    printf("_______________________\n");
}