#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	char teams[n+1][100];
	int m[n+1];
	for(i=0;i<n;i++)
	{
		scanf("%s",teams[i]);
	//	printf("%s",teams[i]);
		m[i]=0;
	}
	int x,y,t;
	char t1[1000],t2[1000];
	i=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",t1,t2);
		scanf("%d%d",&x,&y);
		i+=2;
		for(i=0;i<n;i++)
		{
			if(!strcmp(t1,teams[i]))
				m[i]=m[i]+x;
			if(!strcmp(t2,teams[i]))
				m[i]=m[i]+y;
		}
	}
	int j,c;
	for(j=0;j<n;j++)
	{x=m[0],c=0;
	for(i=0;i<n;i++)
	{
		if(m[i]>=x)
		{
			c=i;	
		}
	}
	m[c]=0;
	printf("%s\n",teams[c]);
}

	return 0;
}
