#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ara[n+4];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int search;
    printf("Enter the search number: ");
    scanf("%d",&search );

    int found=-1;
   // search=ara[0];

    for(int i=0; i<n; i++)
    {
        if(ara[i]==search)
        {
            found=i;
            break;
        }
    }
    if(found==-1)
        printf("%d is not found",search);
    else
        printf("%d is found.",search);

    return 0;
}
