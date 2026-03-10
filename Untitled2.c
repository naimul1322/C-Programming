#include<stdio.h>
int main()
{
    int arr1[5][3], sum[5]={0},avg,i;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d ",&arr1[i][j]);
            sum[i]+=arr1[i][j];

        }

    }
    avg= sum[i]/3;
    for(int i=0; i<5; i++)
    {
        printf("%d :  %d  :  %d\n", i+1,  sum[i],  avg);
    }

    return 0;
}
