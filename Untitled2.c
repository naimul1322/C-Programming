#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter value of X: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);

    printf("before swaping:\n ");
    printf(" X= %d\n",x);
    printf(" Y= %d\n",y);

    temp=x;
    x=y;
    y=temp;

    printf("after the swaping:\n ");
    printf(" X= %d\n",x);
    printf(" Y= %d\n",y);


    getch();
}
