#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value : ");
    scanf("%d",&n);
    int ara[n+6];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int serachnum;
    printf("Enter the search number: ");
    scanf("%d",&serachnum);
    int found=-1;
    for(i=0; i<n; i++)
    {
        if(ara[i]==serachnum){
                found=i;
            break;
        }
    }
    if(found==-1)
        printf("%d is not found in array.%d is position",serachnum,found);
    else
        printf(" %d is found in array %d postion",serachnum,found);


    return 0;
}
