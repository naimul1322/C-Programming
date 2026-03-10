#include<stdio.h>
int main()
{
    while(1)
    {
        FILE *file;
    char name[50];

    file=fopen("information.txt","a");

    if(file==NULL)
    {
        printf("file does not exist");
    }
    else{

    printf(" file is open\n");
    printf("Enter your information: \n");
    gets( name);
    fprintf(file,"%s\n",name);

   // fputs( name,file);
    fputs("\n",file);
    printf("Enter the suessfully. \n");
    fclose(file);

    }
    }

    getch();
}
