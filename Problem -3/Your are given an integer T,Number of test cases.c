#include<stdio.h>
int main()
{
    int T,n;
    scanf("%d",&T);
    int i,j;
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        for(j=n;j>=-n;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}