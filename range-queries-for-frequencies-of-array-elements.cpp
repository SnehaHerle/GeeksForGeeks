//Unordered Map
//https://www.geeksforgeeks.org/range-queries-for-frequencies-of-array-elements/
//Upper Bound and Lower Bound

/*
unordered_map is an associated container that stores elements formed by combination of key value and a mapped value. The key value is used to uniquely identify the element and mapped value is the content associated with the key. Both key and value can be of any type predefined or user-defined.
Internally unordered_map is implemented using Hash Table, the key provided to map are hashed into indices of hash table that is why performance of data structure depends on hash function a lot but on an average the cost of search, insert and delete from hash table is O(1).
*/

/*
Iterator lower_bound (Iterator first, Iterator last, const val)
Iterator upper_bound (Iterator first, Iterator last, const val)
 
lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’.
 
upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’.
*/

// C++ program to find total count of an element 
#include<bits/stdc++.h> 
using namespace std; 

unordered_map< int, vector<int> > store; 

// Returns frequency of element in arr[left-1..right-1] 
int findFrequency(int arr[], int n, int left, int right, int element) 
{ 
	// Find the position of first occurrence of element 
	int a = lower_bound(store[element].begin(), store[element].end(), left) - store[element].begin(); 

	// Find the position of last occurrence of element 
	int b = upper_bound(store[element].begin(), store[element].end(), right) - store[element].begin(); 

	return b-a; 
} 

// Driver code 
int main() 
{ 
	int arr[] = {2, 8, 6, 9, 8, 6, 8, 2, 11}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// Storing the indexes of an element in the map 
	for (int i=0; i<n; ++i) 
		store[arr[i]].push_back(i+1); //starting index from 1 

	// Print frequency of 2 from position 1 to 6 
	cout << "Frequency of 2 from 1 to 6 = "<< findFrequency(arr, n, 1, 6, 2) <<endl; 

	// Print frequency of 8 from position 4 to 9 
	cout << "Frequency of 8 from 4 to 9 = "<< findFrequency(arr, n, 4, 9, 8); 

	return 0; 
} 
