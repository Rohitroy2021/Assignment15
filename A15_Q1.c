//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
// C function to find maximum in arr[] of size n
int largest(int arr[])
{
	int i;

	// Initialize maximum element
	int max = arr[0];

	// Traverse array elements from second and
	// compare every element with current max
	for (i = 0; i < 5; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
	int arr[] = {10, 324, 45, 90, 9};
	//int n = sizeof(arr)/sizeof(arr[0]);
	printf("Largest in given array is %d", largest(arr));
	return 0;
}
