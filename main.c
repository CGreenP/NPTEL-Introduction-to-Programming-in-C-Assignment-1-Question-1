#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if ((num1==num2)||(num1==num3)||(num2==num3))
    {
        printf("%d",0);
    }
    else
    {
        printf("%d",1);
    }
    return 0;
}
