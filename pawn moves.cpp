#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[1000],a[10][10];
	int i,j,k=0;
	scanf("%[^\t\n]s",&str);
	//rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR
	printf("%s",str);
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
		a[i][j]='1';
		}
	}
//	int k=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(str[k]=='/')
			{
				k++;
				break;
			}
			else if(isdigit(str[k]))
			{
				j=j+isdigit(str[k]);
				k++;
			}
			else
			{
			a[i][j]=str[i];
			k++;
			}
		}
	}
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
