#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the value: ");
    scanf("%d",&n);
    int ara[n+4];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }


    int temp=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j+1];
                ara[j+1]=ara[j];
                ara[j]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d\n",ara[i]);
    }


    return 0;
}
