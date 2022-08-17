//Write a function in C to print all unique elements in an array.
#include<stdio.h>
void nondubplicate(int arr[],int n);
int main()
{
  int arr[]={1,1,2,3,4,4,5,6,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    nondubplicate(arr,n);
}
int count =0;
void nondubplicate(int arr[],int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                count++;
            }
        }
    }
        if(count==0)
        {
    printf(" %d ",arr[i]);
}
}

