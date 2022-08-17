//Write a function in C to merge two arrays of the same size sorted in descending
//order.
#include<stdio.h>
void descending(int a[],int b[],int n,int m);
int main()
{
  int a[]={1,2,3,4,5};
  int b[]={6,7,8,9,10};
   int n=sizeof(a)/sizeof(a[0]);
   int m=sizeof(b)/sizeof(b[0]);
   descending(a,b,n,m);
}
void descending(int a[],int b[],int n,int m)
{
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        a[m+i]=b[i];
    }
    for(int i=0;i<m+n;i++)
    {
        c[i]=a[i];
    }
    int temp;
    for(int i=0;i<m+n;i++)
    {
        for(int j=i+1;j<m+n;j++)
        {
            if(c[i]<c[j])
            {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
    }
    for(int i=0;i<m+n;i++)
        printf(" %d ",c[i]);
}
