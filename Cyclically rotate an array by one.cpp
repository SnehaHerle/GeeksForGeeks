// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0

/*
Input:
2
5
1 2 3 4 5
8
9 8 7 6 4 2 1 3
*/

//Time Complexity: O(n) As we need to iterate through all the elements
//Auxiliary Space: O(1)

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
        int n = 0, last_element = 0;
        cin>>n;
        int *a = new int[n]; 
        
        for (int i = 0; i < n; i++)
        {
             cin>>a[i];
        }
        
        last_element = a[n-1];
        for ( int i = n-1 ; i > 0 ; i-- )
        {
            a[i] = a[i-1];
        }
        a[0] = last_element;
        
        for (int i = 0; i < n; i++)
        {
             cout<<a[i]<<" ";
        }
        cout<<endl;
        
        
        
    }
    return 0;
}
