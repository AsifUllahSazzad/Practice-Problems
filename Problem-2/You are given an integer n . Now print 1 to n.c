#include<stdio.h>
int main()
{
    FILE*inputfile = fopen("Input.txt","r");
    if(inputfile == NULL)
    {
        printf("Input file not found.\n");
    }
    FILE*outputfile = fopen("Output.txt","w");
    int n;
    fscanf(inputfile,"%d",&n);
    int i;
    for(i=1;i<=n;i++){
        fprintf(outputfile,"%d ",i);
    }
    return 0;
}