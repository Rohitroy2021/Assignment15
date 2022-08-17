//Write a function to sort an array of any size.
#include<stdio.h>
void sorting(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(int i=1;i<n;i++)
    {
    printf(" %d ",a[i]);
    }
}
int main()
{
    int a[]={21,56,98,56,46,79,33,45,24};
    int n=sizeof(a)/sizeof(a[0]);
    sorting(a,n);
}

