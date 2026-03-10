#include<stdio.h>
struct person{
    char name[50];
int age;
float sly;

} ;
int main()
{
    int n;
    printf("Enter the values: ");
    scanf("%d",&n);
    struct person p1[n+4];
    int i;
    for(i=0; i<n; i++)
    {
        printf("Enter the information :%d\n\n",i+1);
        printf("Enter the name: ");
        fflush(stdin);
        gets(p1[i].name);
        printf("Enter the age: ");
        scanf("%d",&p1[i].age);
        printf("Enter the salary : ");
        scanf("%f",&p1[i].sly);
    }
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        printf("Output :%d\n\n",i+1);
        printf("the Name is: %s\n",p1[i].name);
        printf("the age is: %d\n",p1[i].age);
        printf("The salary is: %.2f\n",p1[i].sly);
    }

    getch();
}
