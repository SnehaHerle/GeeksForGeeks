//https://practice.geeksforgeeks.org/problems/smallest-absolute-difference/0
//k-th smallest absolute difference of two elements in an array

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Returns number of pairs with absolute difference 
// less than or equal to mid. 

int countPairs(int *a, int n, int mid) 
{ 
    int res = 0; 
    for (int i = 0; i < n; ++i)
    {
        // Upper bound returns pointer to position 
        // of next higher number than a[i]+mid in 
        // a[i..n-1]. We subtract (a + i + 1) from 
        // this position to count 
        //cout<<"upper_bound : "<<upper_bound(a+i, a+n, a[i] + mid) - (a + i + 1)<<endl;
        res += upper_bound(a+i, a+n, a[i] + mid) - (a + i + 1);
        //cout<<"res : "<<res<<endl;
    }

    return res; 
} 

// Returns k-th absolute difference 

int kthDiff(int a[], int n, int k) 
{ 
    sort(a, a+n); 
  
    // Minimum absolute difference 
    
    int low = a[1] - a[0]; 
    
    for (int i = 1; i <= n-2; ++i) 
    {
        low = min(low, a[i+1] - a[i]); 
    }
    //cout<<"low : "<<low<<endl;    
    // Maximum absolute difference 
    
    int high = a[n-1] - a[0]; 
    //cout<<"high : "<<high<<endl;
    // Do binary search for k-th absolute difference 
    
    while (low < high) 
    { 
        //cout<<"low : "<<low<<endl; 
        //cout<<"high : "<<high<<endl;
        
        int mid = (low+high)>>1; 
        //cout<<"mid : "<<mid<<endl;
        
        if (countPairs(a, n, mid) < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid; 
        }
            
    } 
  
    return low; 
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
       int n = 0, k = 0, i = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       cin>>k;
       
       cout << kthDiff(a, n, k);
       
       cout<<endl;
    }
    return 0;
}
