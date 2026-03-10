#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("gaan.mp3","w");

  //  if(file==NULL)
     //   printf("file doesnot exist");
    //else{
       // printf("file is open");
        fclose(file);
  // }

    getch();
}
