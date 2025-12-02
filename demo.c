#include<stdio.h>
#include<stdlib.h>
int main()
{ char str[50];
    FILE*fp;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("file does not exist");
    }
    printf("enter what you need to write in file:");
    fgets(str,50,stdin);
    fputs(str,fp);
    fclose(fp);
}