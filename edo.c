#include <stdio.h>
#include<stdlib.h>
int main()
{
    int c,t,n,i,e,*s;
    scanf("%d",&t);
    while(t!=0&&t<=5)
    {c=0;
        scanf("%d",&n);
        if(n>0&&n<=100000){
        s=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
        scanf("%d",&s[i]);
        e=s[0]+1;
        for(i=1;i<n;i++)
        {
            if(e!=s[i])
            {
                c++;
            }
            e=s[i]+1;
        }
        printf("%d\n",c);
        }
        t--;
    }
    return 0;
}

