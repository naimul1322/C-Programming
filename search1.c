#include<stdio.h>
int main()
{
    int ara[]={25,14,56,15,89,75};
    int value,i;
    int pos=-1;
    printf("Enter the value is: ");
    scanf("%d", &value);
    for(i=0; i<7; i++)
    {
        if(value==ara[i])
         {
                pos=  i +1;
           break;
         }
    }
    if(pos==-1)
    {
        printf("data not found");
    }
    else
    {
        printf("the value postion is: %d",pos);
    }


    return 0;
}
