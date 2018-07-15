#include<stdio.h>
#include<conio.h>
int main(){
                //C program to input string from keyboard and write them to files using structure.
    FILE *fp;
    char another ='Y';
    struct emp
    {
    char name[25];
    int age;
    float basic;
    };
    struct emp e;


    fp = fopen("testfilen.txt", "w");
    if(fp ==NULL)
    {
        puts("file can't be open");
        exit(1);
    }
    while(another =='Y')
    {
        printf("\nEnter name, age and basic salary:\n");
        scanf("%s%d%f",&e.name, &e.age, &e.basic);

        fprintf(fp, "%s %d %f\n", e.name, e.age, e.basic);

        printf("Add Another record:(Y/N)\n\n");
        fflush(stdin);
        another = getch();

    }
    fclose(fp);
    return 0;
}
