#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+2][n+2],i=0,c=0,j=0,p=1,k=1;
	for(c=0;c<n/2;c++)
	{
		i=p;
		for(j=p-1;j<=n-1;j++)
		{
			if(a[i][j]!=0)
			{
				a[i][j]=k;
				printf("%dp  ",k);
				k++;
			}
		}
		for(i=p-1;i<=n-1;i++)
		{
			if(a[i][j]!=0)
				{
				a[i][j]=k;
					printf("%dp  ",k);
					k++;
			}
		}
		for(j=n-p;j>=p-1;j--)
		{
			if(a[i][j]!=0)
			{
				a[i][j]=k;
				printf("%dp  ",k);
				k++;
			}
		}
		for(i=n-p;i>=p;i--)
		{
			if(a[i][j]!=0)
			{
			a[i][j]=k;
			printf("%dp  ",k);
			k++;
		}
		}
		n=n-p;
		p++;
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
