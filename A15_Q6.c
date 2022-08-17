//6. Write a function in C to read n number of values in an array and display it in reverse
//order.
#include<stdio.h>
void reverse(int a[],int n);
int main()
{
  int a[]={1,2,3,4,5,6,7,8,9};
     int n=sizeof(a)/sizeof(a[0]);
     reverse(a,n);
     getch();
}
void reverse(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    printf(" %d ",a[i]);
}
