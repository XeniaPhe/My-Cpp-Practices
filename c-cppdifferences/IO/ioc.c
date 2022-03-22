#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* file = fopen("c.txt","w");
    const char* firstline = "This is the first line\n";

    int len = strlen(firstline);

    for (int i=0;i<len;i++)
    {
        fputc(*(firstline++),file);
    }

    const char* secondline = "This is the second line lol\n";

    fputs(secondline,file);

    const char* thirdline = "This is the third line xD\n";

    fprintf(file,"%s",thirdline);

    printf("File write is finished,now proceeding to read the file...\n");
    fclose(file);

//-------------------------------------------------------------------------------
    file = fopen("c.txt","r");

    char read;
    while ((read=(char)fgetc(file))!=EOF && read!='\n')
        printf("%c",read);
    
    printf("\n");

    char* buff = (char*)malloc(sizeof(char)*255);

    fgets(buff, 255, file);
    printf("%s",buff);
    fgets(buff, 255, file);

    //fscanf(file,"%*s",buff);
    printf("%s",buff);
}