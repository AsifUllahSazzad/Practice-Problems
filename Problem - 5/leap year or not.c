#include<stdio.h>
int main()
{
   int n,m,t;
   scanf("%d",&n);
   if(n%4==0)
   {
    printf("%d -> is leap year\n",n);
   }
   else
   {
    printf("%d -> is not leap year\n",n);
   }
   scanf("%d",&m);
   if(m%4==0 && n%4==0)
   {
    printf("%d -> is leap year\n",n);
    printf("%d -> is leap year\n",m);
   }
   else
   {
    printf("%d -> is not leap year\n",n);
    printf("%d -> is not leap year\n",m);
   }
   scanf("%d",&t);
   if(t%4==0 && m%4==0 && n%4==0)
   {
    printf("%d -> is leap year\n",n);
    printf("%d -> is leap year\n",m);
    printf("%d -> is leap year\n",t);
   }
   else
   {
    printf("%d -> is not leap year\n",n);
    printf("%d -> is not leap year\n",m);
    printf("%d -> is not leap year\n",t);
   }
    return 0;
}