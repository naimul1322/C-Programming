#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value: ");
    scanf("%d",&n);
    int ara[n+4];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int max=ara[0];
    int min=ara[0];
    for(i=1; i<n; i++)
    {
        if(max<ara[i])
        {
            max=ara[i];
        }
    }
    for(i=1; i<n; i++)
    {
        if(min>ara[i])
        {
            min=ara[i];
        }
    }
    printf("the maximum number is : %d\n",max);
    printf("\n");
    printf("the manimum number is : %d\n",min);
    return 0;
}
