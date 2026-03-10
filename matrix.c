#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the row number: ");
    scanf("%d",&m);
    printf("Enter the coloum number: ");
    scanf("%d",&n);

    int ara1[m+4],ara2[n+4];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&ara1[i]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&ara2[j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" %d",ara1[i]);
        }
        printf("\n");
    }

for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" %d",ara2[j]);
        }
        printf("\n");
    }


    return 0;
}
