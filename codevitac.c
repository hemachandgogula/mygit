#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=n-1;i>-1;i--)
{
    max=0;
    tech:for(j=n-1;j>-1;j--)
    {
        if(max<a[i][j])
            max=a[i][j];
    }
    goto tech;
}
return 0;
}
