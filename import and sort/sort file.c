#include<stdio.h>
#include<stdlib.h>
#define N 15
int main()
{
    //This code is able to input file(only numbers) and print it.
    //After that there is option to sort the data.

    int i,j,d,e, a[N], swap, input,k;
    FILE *fp;
    char filename[100], c;
    printf("Enter the filename to open \n");
    scanf("%s", filename);

    /*fp = fopen("TestData.csv", "r");

    c = fgetc(fp);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);
  */

  fp=fopen("testnum.csv", "r");

 for(i=0; i<N; i++)
 {
  fscanf(fp,"%d", &a[i]);
  printf("%d\n",a[i]);
}

    printf("enter 1 for sort column 1\n");
    scanf("%d", &input);

    if(input==1)
    {

    for(e=0; e<(N-1); e++)
    {
    for(d=0; d<(N-e-1); d++)
    {
    if(a[d]> a[d+1])
    {
    swap=a[d];
    a[d]=a[d+1];
    a[d+1]=swap;
    }
    }}
    for(e=0; e<N; e++)
    printf("%d\n",a[e]);
    }
    fclose(fp);
    return 0;
    }
