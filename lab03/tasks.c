#include <stdio.h>
/*int main()
{
    int c,f;
    printf("Centigrade : ");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("fahrenheit : %d",f);
}
*/
/*
int main()
{
    int sum = 0;
    int n;
    for (int i = 1; i <= 5; i++)
    {
        printf("Side %d : ", i);
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("Perimeter : %d", sum);
}
*/
/*
int main()
{
    int x, y;
    printf("enter x1 : ");
    scanf("%d", &x);
    printf("enter x2 : ");
    scanf("%d", &y);
    int answer = (x * x) + (y * y) + 2 * x * y;
    printf("answer is : %d", answer);
    answer = (x * x) + 1 / (y * y) - 2;
    printf("\nanswer is : %d", answer);
    answer = (x + y) * (x - y);
    printf("\nanswer is : %d", answer);
}
*/
int main()
{
    char a = 'F', b = 'C', c = 'I';
    // printf("enter first character : ");
    // scanf("%c", &a);
    // printf("enter second character : ");
    // scanf("%c", &b);
    // printf("enter third character : ");
    // scanf("%c", &c);
    printf("difference between %c and %c is %d", a, b, a - b);
    printf("\ndifference between %c and %c is %d", b, c, b - c);
    printf("\ndifference between %c and %c is %d", c, a, c-a);
}
