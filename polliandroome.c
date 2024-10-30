#include<stdio.h>
int main()
{
    int a,b,rev =0,rem=0,r;
    printf("enter the integer number \n");
    scanf("%d",&a);
    r=a;
    while(a!=0)
    {
        rem=a%10;
        rev=(rev*10) + rem;
        a=a/10;
    }
    printf("revers is %d\n",rev);
    if(r=rev)
    {
        printf("%d is polliandrom\n",rev);
    }
    else
    {
        printf("%d is polliandrom\n",rev);
    }
    return 0;
}