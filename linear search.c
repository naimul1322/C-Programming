#include<stdio.h>
int main()
{
    int n,i,found=-1;
    printf("Enter the value: ");
    scanf("%d",&n);

    int ara[n+4];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int search;
    printf("Enter the search number: ");
    scanf("%d",&search);

    for(i=1; i<=n; i++)
    {
        if(ara[i]==search){
            found=i;
            break;
        }

    }
    if(found==-1)
    {
        printf("%d number is not found.the number is %d ",found,search);
    }
    else{
        printf("%d is found.The number is %d ",found,search);
    }


    return 0;
}
