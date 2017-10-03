#include<stdio.h>
int main() {
    int i,count1=0,test,j,count=0,k=0,a[100],c=0,m=0,p=0;
    static int b[100];
    scanf("%d",&test);
    while(test--)
    {
    long int l,r;
       scanf("%ld",&l);
       scanf("%ld",&r);
        if(l>r||r>1000000)
            return 0;
   for(i=l;i<=r;i++)
   {
       count=0;
       for(j=1;j<=i;j++)
       {
            if(i%j==0)
            {
                count++;
            }
       }
      if(count==2)
      {
          a[k]=i;
          k++;
          c++;
      }
   }
 /*  for(k=0;k<c;k++)
{
    printf("%d\n",a[k]);
}*/
    for(i=l;i<=r;i++)
    {
        m=0;
        for(j=0;j<c;j++)
        {
        if(i>=a[j])
        {
            m++;
        }

        }
        b[p]=m;
        p++;
    }
    for(p=0;p<r;p++)
    {
    //printf("%d\n",b[p]);
       count=0;
       for(j=1;j<=i;j++)
       {
            if(b[p]%j==0)
            {
                count++;
            }
       }
      if(count==2)
      {
          count1++;
      }
   }
    printf("\n%d",count1);
}
    return 0;
}
