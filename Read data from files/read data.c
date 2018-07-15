#include<stdio.h>
#include<stdlib.h>
#include<string.h>

        //C program to read data from file and display on screen

int main(){
    char c[2];
    FILE *fp;

    fp = fopen("testfile.txt", "r");

    while( fgets(c, 2, fp) !=NULL)          //upper bound allow program not to read too long sting and overflow the array.
        printf("%s", c);

    printf("\n\n");
    fclose(fp);
    return 0;
}
