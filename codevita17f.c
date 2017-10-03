#include<stdio.h>
int max(int *a,int i)
{

int t,j,ma;
    for(j=i;j<5;j++)
    {
        if(ma<a[j])
        {
            ma=a[j];
            t=j;
        }
    }
    a[t]=0;
    return ma+max(a,i+1);
}
int main()
{
int i,n;
scanf("%d",&n);
int a[n+1];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int sum=max(&a,n);
printf("%d",sum);
return 0;
}
