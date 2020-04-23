/*
Pascal’s Triangle
Pascal’s triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value n as input and prints first n lines of the Pascal’s triangle. Following are the first 6 rows of Pascal’s Triangle.
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1

https://practice.geeksforgeeks.org/problems/pascal-triangle/0
*/ 

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void printPascal(int n) 
{ 
	int arr[n][n]; 

	for (int line = 0; line < n; line++) 
	{ 
		for (int i = 0; i <= line; i++) 
		{ 
		    if (line == i || i == 0) 
		        arr[line][i] = 1; 
		    else
			    arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i]; 
		    
		    if(line == n-1)
		        cout << arr[line][i] << " "; 
		} 
		 
	}
	cout << "\n";
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
       int n = 0 , i = 0;
       cin>>n;
       printPascal(n);
    }
    return 0;
}





