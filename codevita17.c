#include<stdio.h>
 int main()
 {
     int n;
        scanf("%d",&n);
        int i,a[n+1],c[n+1];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        i=0;
        int j=n-1,k=0,m=0;
        while(i<=j)
        {
            if(a[i]==a[j])
            {
                c[k]=a[i];
                i++;
                j--;
                k++;
                }
            else if(a[i]>a[j])
            {
                a[j-1]=a[j]+a[j-1];
                m++;
                j--;
                }
            else if(a[i]<a[j])
            {
                a[i+1]=a[i]+a[i+1];
                i++;
                m++;
            }

        }
        if((m+k)==n)
        {
            printf("TRIVIAL MERGE");
        }
        else
        {
        //	n=0;
        printf("%d\n",m);
        for(i=0;i<k-1;i++)
        {
            printf("%d ",c[i]);
          //  n++;
            }
            //printf(" ");
         for(i=k-1;i>=0;i--)
         {
         	printf("%d ",c[i]);
         }
        }
    return 0;
}
