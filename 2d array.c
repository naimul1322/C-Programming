#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the row number: ");
    scanf("%d",&m);
    printf("\n");
    printf("Enter the coloum number: ");
    scanf("%d",&n);

    int ara[n][m];


  for(i=0; i<m; i++)
  {
      for(j=0; j<n; j++)
      {
          printf("Array is [%d][%d]= ",i,j);
          scanf("%d",&ara[i][j]);
      }

  }
  printf("\n");

  for(i=0; i<m; i++)
  {
      for(j=0; j<n; j++)
      {
          printf(" %d ",ara[i][j]);
      }
      printf("\n");
  }

    return 0;
}
