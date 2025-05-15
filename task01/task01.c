#include<stdio.h>
int percent(int m,int t){
 int percentage=(m*100)/t;
 return percentage;
}
int main()
{
    int m,f;
    printf("enter number of males : ");
    scanf("%d",&m);
    printf("enter number of females : ");
    scanf("%d",&f);
    int t=m+f;
    if(m>f){
        printf("=======================================\n");
        printf("| percentage of males : %d |\n",percent(m,t));
        printf("| percentage of females : %d |\n",percent(f,t));
        printf("=======================================");
    }
    else {
         printf("**************************************\n");
        printf("*** percentage of females : %d ***\n",percent(f,t));
        printf("*** percentage of males : %d ***\n",percent(m,t));
        printf("***************************************");
    }
}
