//Binary Search only for Positive Number

#include <stdio.h> 


int binarySearch(int a[], int l, int r, int loc) 
{ 
	if (r >= l) 
	{ 
		int mid = (l + r)/2; 

		// If the element is present at the middle itself 
		if (a[mid] == loc) 
			return mid; 

		// If element is smaller than mid, then it can only be present 
		// in left subarray 
		else if (a[mid] > loc) 
			return binarySearch(a, l, mid-1, loc); 

		// Else the element can only be present in right subarray 
		else
			return binarySearch(a, mid+1, r, loc); 
	} 

	// this means element is not present in array 
	return -1; 
} 

int main(void) 
{ 
	int a[20], loc, count, i;
	
	printf("Enter number of elements: ");
	scanf("%d", &count);

	printf("Enter %d numbers: ", count);
	for(i = 0; i < count; i++)
		scanf("%d", &a[i]);
	
	printf( "Enter number to search: ");
	scanf("%d", &loc);

	int result = binarySearch(a, 0, count-1, loc); 
	(result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n", result); 
	return 0; 
} 

