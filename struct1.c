#include<stdio.h>

struct person
{

    char  name;
    int age;
    float salary;
};

int main()
{
    struct person p1,p2;
    int i;

    printf("Enter the name:\n ");
    // scanf("%s",&p1.name);
    fflush(stdin);
    gets(p1.name);
    printf("Enter the age: \n");
    scanf("%d",&p1.age);
    printf("Enter the salary: \n");
    scanf("%f",&p1.salary);


    printf("\tperson 1\n");
    printf("The name is : %s\n",p1.name);
    printf("The age is : %d\n",p1.age);
    printf("The salary is : %.2f\n",p1.salary);


    return 0;
}
