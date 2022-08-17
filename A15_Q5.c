//Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.

#include<stdio.h>
//void occur(int );
int main()
{
    int a[7]={1,2,3,3,4,5,5};
    int n=sizeof(a)/sizeof(a[0]);
   // occur(a);
    //getch();

//void occur(int a[])
//{
    for(int i=0;i<n;i++)

        if(a[i]==a[i+1])
        printf("%d",a[i]);
}
