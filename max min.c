#include<stdio.h>
int main()
{
    int n,i;
    printf("How many number: ");
    scanf("%d",&n);


    int ara[n+4];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    int max=ara[0];
    for(i=1; i<n; i++)
    {
        if(max<ara[i])
        {
            max=ara[i];
        }
    }
    printf("maximum value is: %d\n",max);

 int min=ara[0];
    for(i=1; i<n; i++)
    {
        if(min>ara[i])
        {
            min=ara[i];
        }
    }
    printf("maximum value is: %d",min);


    return 0;
}
