#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[1000];
	scanf(" %[^\t\n]s",&str);
	int i,a[1000],p,n=0;
	//printf(" %s",str);
	for(i=0;str[i];i++)
	{
		a[i]=abs((int)str[i]-64);
		n++;
	}
	p=0;
	for(i=0;i<n
	;i++)
	{
		if(a[i]==32)
		{
			i++;
			p=0;
		printf("\n");
		}
		while(a[i]!=0&&p%2==0)
		{
			a[i]--;
			printf("0");
		}
		while(a[i]!=0&&p%2==1)
		{
			a[i]--;
			printf("!");
		}
		p++;		
	}
	return 0;
}
