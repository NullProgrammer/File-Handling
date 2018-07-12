#include<stdio.h>

int main(){

// program to display its own code as output.
FILE *fp;
char c;

    fp= fopen( __FILE__, "r");
    c = fgetc(fp);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }

    fclose(fp);

}
