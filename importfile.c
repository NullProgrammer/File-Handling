#include<stdio.h>
#include<stdlib.h>
//This c program import file from user and print on the screen
int main()
{
    FILE *fp;
    char filename[100], c;
    printf("Enter the filename to open \n");
    scanf("%s", filename);

    fp = fopen("TestData.csv", "r");

    c = fgetc(fp);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }

    fclose(fp);
    return 0;
}
