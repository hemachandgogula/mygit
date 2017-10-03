#include<stdio.h>
#include<stdlib.h>
int prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	long int n;
	scanf("%ld",&n);
	if(n<=2||n>12000000000)
	{
		exit(0);
	}
	int sum=2,i,count=0;
	for(i=2;i<n;i++)
	{
	if(prime(i))
	{
		sum=sum+i;	
	if(sum<n&&prime(sum))
	{
		count++;	
	}
	}
}
printf("%d",count);
return 0;
}
