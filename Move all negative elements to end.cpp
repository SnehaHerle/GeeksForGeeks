//https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end/0
//Move all negative elements to end
//Move all negative elements to end in order with extra space allowed
//https://www.geeksforgeeks.org/move-ve-elements-end-order-extra-space-allowed/

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
       int n = 0 , i = 0, j = 0, key = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       for (int i = 1; i < n; i++) 
       { 
            key = a[i]; 
  
        // if current element is positive 
        // do nothing 
            if (key < 0) 
                continue; 
  
        /* if current element is negative, 
        shift positive elements of arr[0..i-1], 
        to one position to their right */
            j = i - 1; 
            while (j >= 0 && a[j] < 0) 
            { 
                a[j + 1] = a[j]; 
                j = j - 1; 
            } 
  
        // Put negative element at its right position 
            a[j + 1] = key; 
    }
    
    for (i = 0 ; i<n ; i++ )
       {
           cout<<a[i]<<" ";
       }
    
       cout<<endl;
    }
    return 0;
}
