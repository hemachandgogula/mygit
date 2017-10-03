#include<stdio.h>
int fact(int n)
{
    int m=1,i;
    for(i=n;i>1;i--)
    {
        m=m*i;
    }
    return m;
}
int comb(int n,int a)
{
        int m;
        m=fact(n)/fact(a);
        m=m/fact(n-a);
        return m;
}
int main()
{
    int i,x=0,n,a;
    scanf("%d%d",&n,&a);
    for(i=0;i<=a;i++)
    {
        if(i%2==0)
     x=x+comb(n,i);
    }
    printf("%d",x);
    return 0;
}
