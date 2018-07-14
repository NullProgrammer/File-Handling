#include<stdio.h>
#include<string.h>
#include<stdlib.h>

        //C program to Enter input from keyboard and write it to files.

int main(){
    char c[100];
    FILE *fp;

    fp = fopen("testfilen.txt", "w");

                    //No comparison of file is required(File is empty or not), it's because fopen will create the file if not found.

    printf("\nEnter the strings what you want to enter:\n\n");
    while( strlen( gets(c)) >0)
    {
        fputs(c, fp);
        fputs("\n", fp);            //Enter will write all the lines written by user to the file and close the output window.

    }
    fclose(fp);
    return 0;


}
