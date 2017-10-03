#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j=0,n,m;
	scanf("%d%d",&n,&m);
	int mx[2*n+1],a1[n+1],a2[n+1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
		mx[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a2[i]);
		//mx[j++]=0
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(abs(a2[i])>max)
		{
			max=abs(a2[i]);
		//	printf(" %d\n",max);
			j=i;
		}
	}
	if(a1[j]>=0)
	a1[j]=a1[j]-2*m;
	else
	a1[j]=a1[j]+2*m;
	max=0;
	for(i=0;i<n;i++)
	{
		max=max+a1[i]*a2[i];
	}
	printf("%d",max);
	return 0;
}
