#include<stdio.h>
#include<stdlib.h>
int main()
    // c program to print number of characters, lines, tabs and blank space n file
{
    FILE *fp;
    char filename;
    int ch;
    int n_char=0, n_blank=0, n_line=1, n_tabs=0;  // n_line is initialized to 1 because of logic being used  to detect new line is '\n', which only
                                                  // execute after 1st line, means it can't count Line 1.

    printf("enter file name to open:\n");
    scanf("%s", &filename);
    fp = fopen("testfile.txt", "r");

    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
            n_char++;

        if(ch ==' ')
            n_blank++;
        if(ch =='\n')
            n_line++;
        if(ch == '\t')
            n_tabs++;

    }
    fclose(fp);

    printf("Number of character: %d\n", n_char);
    printf("Number of blank: %d\n", n_blank);
    printf("Number of line: %d\n", n_line);
    printf("Number of tabs: %d\n", n_tabs);

    return 0;

}
