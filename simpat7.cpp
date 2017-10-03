#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char a[50][50];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||i==n-j-1||j==n-i-1)
            {
                a[i][j]='M';
            }
            else if(i==0||j==n-1||j==0||i==n-1)
            {
                a[i][j]='F';
            }
            else
            {
                a[i][j]='C';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
