#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n>1000000000000000000)
        return 0;
    long int a[n];
    long int t,i=0,j;
    while(n)
    {
        a[i]=n%10;
        n=n/10;
        //printf("%lld",a[i]);
        i++;
    }
    for(j=i-1;j>0;j--)
    {
        //printf("%d ",a[j]);
        while(a[j]>a[j-1]&&a[j-1]!=0)
        {
            a[j-1]--;
            if(a[j-1]==0)
            {
                a[j-1]=9;
             a[j]--;
            }
        }
    }
    t=i-1;
   printf("\n");
    while(t>=0)
    {
        printf("%ld",a[t]);
        t--;
    }
    return 0;
}

