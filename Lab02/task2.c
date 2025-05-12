#include<stdio.h>
int main()
{
    int salary=40000;
    int ca,ma,hr,gs,tax,netsalary;
    ca=(salary*10)/100;
    ma=(salary*15)/100;
    hr=(salary*45)/100;
    gs=salary+ca+ma+hr;
    tax=(gs*20)/100;
    netsalary=gs-tax;
    printf("\nBasic slary:%d",salary);
    printf("\nconveyance allowance:%d",ca);
    printf("\nmedical allowance:%d",ma);
    printf("\nhouse rent:%d",hr);
    printf("\ngross salary:%d",gs);
    printf("\nTax:%d",tax);
    printf("\nnet salary:%d",netsalary);
}