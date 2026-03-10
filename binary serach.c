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
    int search;
    printf("Enter the search number: ");
    scanf("%d",&search);

    int left,right,mid;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;

    if(ara[mid]==search)
    {
        printf("item is found %d\n",mid);
        return 0;
    }
    else if(ara[mid]<search){
        left=mid+1;
    }else{
    right=mid-1;
    }

    }
    printf("item is not found\n");

    return 0;
}
