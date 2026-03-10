#include<stdio.h>
int main()
{
    while(1)
    {
        FILE *file;
    char name[50];
    file=fopen("sir.mp3","a");

    if(file==NULL)
    {
        printf("file is not open");
    }
    else
    {
        printf("\nfile is open \n");

       printf("Enter your information: ");

       gets(name);
       fputs(name,file);
       fputs("\n",file);
       printf("conformation");



        fclose(file);
    }
    }
    getch();
}
