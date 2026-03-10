#include<stdio.h>
int main()
{
    FILE *file;
    char name[30]="  Naimul\n";
    int lenth= strlen(name);
    int i;

    file= fopen("jibon.text","a");

    if(file==NULL)
    {
        printf("file does not exist");
    }
    else{

        printf("file is open");

    for(i=0; i<lenth; i++)
    {
        fputc(name[i],file);
    }
        fclose(file);
    }

    return 0;
}
