#include<stdio.h>
int main()
{
    int num []= {23,42,54,12,29.8};
    int value;
    printf("enter the value you want to search: ");
    scanf("%d",&value);
    int pos=-1,i;

    for(i=0; i<7; i++)
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    if(pos==-1)
    {
        printf("data not found");
    }
    else
    {
        printf("the value is: %d",pos);
    }

    return 0;
}
