#include<stdio.h>
#include<stdlib.h>
long int fact(long int n)
{
    long int m;
    if(n>1)
       return m=n*fact(n-1);
    else
    return 1;
}
long int comb(long int n,long int a)
{
        long int m;
        m=fact(n)/fact(a);
        m=m/fact(n-a);
        return m;
}
int main()
{
   long int i,x=0,n,a;
    scanf("%ld%ld",&n,&a);
    if(n<0||a>1000000000||n<a||n>1000000000)
	exit(0);
    for(i=0;i<=a;i+=2)
    {
     x=x+comb(n,i);
    }
    printf("%ld",x);
    return 0;
}

