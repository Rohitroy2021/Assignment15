#include<stdio.h>
void frequency(int a[],int n);
int main()
{
int a[]={1,2,3,4,2,5,6,2};
int n=sizeof(a)/sizeof(a[0]);
frequency(a,n);
}
void frequency(int a[],int n)
{
    int key=2,freq=0;
    for(int i=0;i<n;i++)
    if(a[i]==key)
    freq++;
    printf("Frequency is %d",freq);
}
