//https://www.geeksforgeeks.org/rearrange-positive-negative-numbers-using-inbuilt-sort-function/
//Rearrange positive and negative numbers using inbuilt sort function

// C++ program to demonstrate descending order sort using 
// greater<>(). 
#include <bits/stdc++.h> 
using namespace std; 

int arr[] = {100, 500, 18, 90}; 
int n = sizeof(arr)/sizeof(arr[0]); 


bool compare(int a, int b)
{ 
    
    for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 
    cout<<"    Comparing a: "<<a<<" and b: "<<b<<endl;
    return a < b;
}

int main() 
{ 
	

	sort(arr, arr+n, compare); 

	cout << "Array after sorting : \n"; 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 

	return 0; 
} 
