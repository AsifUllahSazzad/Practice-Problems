#include<stdio.h>
int main()
{
    FILE*inputfile = fopen("input.txt","r");
    if(inputfile == NULL)
    {
        printf("Input file not found.\n");
    }
    FILE*outputfile = fopen("output.txt","w");
    int n;
    fscanf(inputfile,"%d",&n);
    int arr[n];
    int i;
    for(i=1;i<=n;i++)
    {
        fscanf(inputfile,"%d",&arr[i]);
    }
    int ans,sum=0;
    for(i=1;i<=n;i++)
    {
        ans = arr[i]%10;
        sum+=ans;
    }
    fprintf(outputfile,"Sum = %d\n",sum);
    return 0;
}