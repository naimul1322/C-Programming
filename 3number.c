#include<stdio.h>
int main()
{

    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3)
    {
        printf("Large number Is: %d\n",num1);
    } else if (num2>num1 && num2>num3)
    {
        printf("Large number Is: %d\n",num2);
    } else if (num3>num2 && num3>num1)
    {
        printf("Large number Is: %d\n",num3);
    }
    else{
        printf("number is eual");
    }
    return 0;
}
