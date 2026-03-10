#include<stdio.h>
int main()
{
    int x=20,y=10, temp;
    int *p1,*p2;

    p1=&x;
    p2=&y;
    printf("before swaping: \n");
    printf("X is %d\n",*p1);
    printf("Y is %d\n",*p2);

    temp=*p1;
    *p1=*p2;
    *p2=temp;

     printf("after swaping: \n");
    printf("X is %d\n",*p1);
    printf("Y is %d\n",*p2);


    return 0;
}
