//Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
#define LEFT 0
#define RIGHT 1
void display(int n,int a[]);
void rotate(int n,int a[],int direction,int shift_count);
int main()
{
   int a[5]={32,29,40,12,70};
   display(5,a);
   rotate(5,a,LEFT,2);
   display(5,a);
}
 void display(int n,int a[])
{
    printf("\n");
    for(int i=0;i<n;i++)
        printf(" %d ",a[i]);
}
void rotate(int n,int a[],int direction,int shift_count)
{
    int temp;
    if(direction==RIGHT)
    {
       while(shift_count)
       {
           temp=a[n-1];
           for(int i=n-1;i>=1;i--)
            a[i]=a[i-1];
            a[0]=temp;
            shift_count --;
       }
    }
    else if(direction==LEFT)
    {
        while(shift_count)
        {
            temp=a[0];
            for(int i=0;i<n-1;i++)
                a[i]=a[i+1];
            a[n-1]=temp;
            shift_count --;
        }
    }
}
