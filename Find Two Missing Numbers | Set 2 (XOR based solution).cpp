//https://algorithms.tutorialhorizon.com/find-the-right-most-set-bit-of-a-number/

//Keerti's video

//https://www.geeksforgeeks.org/find-two-missing-numbers-set-2-xor-based-solution/

//Find Two Missing Numbers | Set 2 (XOR based solution)

#include<bits/stdc++.h> 

/* findTwoMissingNumbers : Function to find two missing numbers in range 
[1, n]. This function assumes that size of array 
is n-2 and all array elements are distinct. */

void findTwoMissingNumbers(int arr[], int n) 
{ 
	int XOR = arr[0]; 
	
	for (int i = 1; i < n-2; i++) //XOR of all elements of arr[]
		XOR ^= arr[i]; 
		
	for (int i = 1; i <= n; i++)  //XOR of [1,n]
		XOR ^= i; 

	int set_bit_no = XOR & ~(XOR-1);  //get the rightmost set bit
	int x = 0, y = 0; //initialize missing numbers 
	
	for (int i = 0; i < n-2; i++) 
	{ 
		if (arr[i] & set_bit_no) 
			x = x ^ arr[i]; //XOR of first set in arr[]
		else
			y = y ^ arr[i]; //XOR of second set in arr[]
	} 
	
	for (int i = 1; i <= n; i++) 
	{ 
		if (i & set_bit_no) 
			x = x ^ i; // XOR of first set in arr[] and {1, 2, ...n }
		else
			y = y ^ i; // XOR of second set in arr[] and {1, 2, ...n }
						
	} 
	
	printf("Two Missing Numbers are\n %d %d", x, y); 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = {1, 3, 5, 6}; 
	int n = 2 + sizeof(arr)/sizeof(arr[0]); //range of numbers is 2 plus size of array 
	findTwoMissingNumbers(arr, n); 
	return 0; 
} 
