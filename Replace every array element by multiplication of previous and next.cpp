//Replace every array element by multiplication of previous and next
//https://www.geeksforgeeks.org/replace-every-array-element-by-multiplication-of-previous-and-next/

// C++ program to update every array element with 
// multiplication of previous and next numbers in array 
#include<iostream> 
using namespace std; 

void modify(int arr[], int n) 
{ 
	// Nothing to do when array size is 1 
	if (n <= 1) 
	return; 

	// store current value of arr[0] and update it 
	int prev = arr[0]; 
	arr[0] = arr[0] * arr[1]; 

	// Update rest of the array elements 
	for (int i=1; i<n-1; i++) 
	{ 
		// Store current value of next interation 
		int curr = arr[i]; 

		// Update current value using previos value 
		arr[i] = prev * arr[i+1]; 

		// Update previous value 
		prev = curr; 
	} 

	// Update last array element 
	arr[n-1] = prev * arr[n-1]; 
} 

// Driver program 
int main() 
{ 
	int arr[] = {2, 3, 4, 5, 6}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	modify(arr, n); 
	for (int i=0; i<n; i++) 
	cout << arr[i] << " "; 
	return 0; 
} 
