#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	if(n<1||n>25)
	exit(0);
	int a[n+1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<1||a[i]>500)
		exit(0);
	}
	int sum=0;
	i=0;
	while(a[i])
	{
		sum=sum+a[i];
		i++;
	}
	if(sum%3!=0)
	printf("No");
	else
	{
		
		printf("Yes"); 
		i=1;
		int max=0;
		while(a[i])
		{
			if(a[i]!=0)
				max=max+a[i]%3;
				i++;
		}
		max=max/3;
		printf(" %d",max);
	}
}
