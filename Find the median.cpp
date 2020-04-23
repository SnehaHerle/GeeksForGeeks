/*
https://practice.geeksforgeeks.org/problems/find-the-median/0

Find the median

Median of a sorted array - 
mid if n is odd.
avg of 2 middle elements if n is even.
*/

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
       int n = 0, i = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       sort(a, a+n);
       
       if(n%2 == 0)
            cout<<(a[n/2]+a[(n/2)-1])/2;
        else
            cout<<a[n/2];
       cout<<endl;
    }
    return 0;
}
