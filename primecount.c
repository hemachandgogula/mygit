#include<stdio.h>
int primecount(int n)
{
    int c1=0,c=0,j,i=1;
    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            c++;
            }
        }
        if(c==2)
        c1++;
    }
    return c1;
}
int main()
{
    int l,r,
}
