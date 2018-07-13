#include<stdio.h>
#include<stdlib.h>
int main()
{
    //c program to copy contents of 1 file to another.

    FILE *fp1, *fp2;
    int ch;
    char filename1, filename2;

    printf("enter file name to open:\n");
    scanf("%s", &filename1);

    fp1 = fopen("testa.txt", "r");
    if(fp1 == NULL)
    {
        puts("Cannot open targeted file");
        exit(1);
    }

    printf("enter another file name to open:\n");
    scanf("%s", &filename2);

    fp2 = fopen("testb.txt", "w");
    if(fp2 == NULL)
    {
        puts("Cannot open targeted file");
        fclose(fp1);
        exit(2);
    }
    while(1)
    {
        ch = fgetc(fp1);
        if(ch == EOF)
            break;
        else
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;

}
