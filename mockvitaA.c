#include<stdio.h>
#include<stdlib.h>
int prime(long int n)
{
	int *x,c,i,j,k=0;
	for(i=3;i<=n;i++)
	{
		c=0;
		for(j=2;j<=i;j++)
		{
		if(i%j==0)
		c++;
		}
		if(c==1)
		x[k++]=i;
	}
	int sum=2;
	c=0;
	for(i=0;i<k;i++)
	{
		sum=sum+x[i];
		j=i;
		while(j<k)
		{
			if(sum==x[j])
			c++;
		}
	}
	return c;
}
int main()
{
	long int n;
	scanf("%ld",&n);
	if(n<=2||n>12000000000)
	{
		exit(0);
	}
	long int count;
	count=prime(n);
printf("%ld",count);
return 0;
}
