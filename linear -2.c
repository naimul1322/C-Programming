#include<stdio.h>
int main()
{
    int n,k=0;
    printf("Enter the elements number: ");
    scanf("%d",&n);
    int arr[n+4];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int found;

    printf("enter the seraching data : ");
    scanf("%d",&found);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==found){
            printf("data found %d",i);
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
