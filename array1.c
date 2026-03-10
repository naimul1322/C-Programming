#include<stdio.h>
int main()
{
   while(1)
   {
        int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    printf("\n");
    int ara[n+6];

    for(int i=0; i<n; i++)
    {
       printf("numbers [%d] =",i+1);
        scanf("%d",&ara[i]);
    }

    printf("\n");

    for(int i=0; i<n; i++)
    {
        printf("the  number is: %d\n",ara[i]);
    }
   }

    return 0;
}
