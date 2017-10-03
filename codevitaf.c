#include<stdio.h>
//using namespace std;
void bubble(int *array,int n)
{
    int c,d,swap;
for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
}
int main()
{
    int i,n,x,sum=0;
   scanf("%d",&n);
   int a[n+1],values[n+1];
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    values[i]=a[i];
    //max=max+values[i];
   }

  //qsort(values, n, sizeof(int), cmpfunc);
    bubble(&values,n);
    int m[n+1],c=0,k;
   for(i=0;i<n;i++)
   {
       k=0;
       while(values[i]!=a[k])
       {
           k++;
       }
           sum=sum+a[i];
           m[c++]=k;
           a[k]=0;
           i++;
           k=0;
       while(values[i]!=a[k])
       {
           k++;
       }
       sum=sum+a[i];
           m[c++]=k;i++;
           a[k]=0;
           k=0;
        while(values[i]!=a[k])
       {
           k++;
       }sum=sum+a[i];
           m[c++]=k;i++;
           x=0;
        while((x+2)<c)
        {
            if(m[x]-m[x+1]<6)
            {
            if(m[x+1]-m[x+2]<6||m[x]-m[x+2]<6)
            {
                sum=sum-a[m[x+2]];
            }
            }
                x++;
        }
            //sum=sum-a[m];
        }
        printf("\n%d",sum);
    return 0;
}
