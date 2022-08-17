//Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
void dubplicate(int arr[],int n);
int main()
{
  int arr[]={1,1,2,3,4,4,5,6,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    dubplicate(arr,n);
    getch();
}
void dubplicate(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements are %d",count);
}

