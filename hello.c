#include<stdio.h>
int main()
{
    while(1)
    {
      int num1,num2;
    printf("Enter the two number : ");
    scanf("%d %d",&num1,&num2);
    printf("1.two number addtion\n");
    printf("2.two number subtraction\n");
    printf("3. two number multiplication\n");
    printf("4. two number divison : \n");
    printf("5. two number modulus: \n");
    int n;
    printf("Enter your choose: \n");
    scanf("%d",&n);

    switch(n){
     case 1:
    printf("the add is %d\n",num1+num2);
    break;
case 2:
    printf("the substarction is %d\n",num1-num2);
    break;
case 3:
    printf("the multipiction is %d\n",num1*num2);
    break;
case 4:
    printf("the divison is %d\n",num1/num2);
    break;
    case 5:
    printf("the mudulus is %d\n",num1%num2);
    break;



    }
    }


    return 0;
}
