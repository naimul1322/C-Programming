#include<stdio.h>
int main()
{
    int n,k=0;
    printf("Enter the elements number: ");
    scanf("%d",&n);
    int a[n+4];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int search ;
    printf("enter the search value : ");
    scanf("%d",&search);

    for(int i=0; i<n; i++){
        if(a[i]==search)
        {
            printf("data found index %d",i);
            k++;
            break;

        }
    }
    if(k==0)
    {
        printf("data not found");
    }
    return 0;
}
