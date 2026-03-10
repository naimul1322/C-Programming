#include<stdio.h>
int main()
{
    FILE  *file;

   file= fopen("text.jpg"," w");

   if(file==NULL)
   {
       printf("file doest exist");
   }
   else{
    printf("file is open");
    fclose(file);

   }

    return 0;
}
