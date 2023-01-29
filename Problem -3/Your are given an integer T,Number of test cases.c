#include<stdio.h>
int main()
{
    FILE*inputf=fopen("input.txt","r");
    if(inputf==NULL)
    {
        printf("Input file not found.\n");
    }
    FILE*outputf=fopen("output.txt","w");
    int T;
    fscanf(inputf,"%d",&T);
    int i,n,j;
    for(i=1;i<=T;i++)
    {
        fscanf(inputf,"%d",&n);
        for(j=n;j>=-n;j--)
        {
            fprintf(outputf,"%d ",j);
        }
        // printf("\n");
        for(j=n;j<=-n;j++)
        {
            fprintf(outputf,"%d ",j);
        }
        fprintf(outputf,"\n");
    }
}