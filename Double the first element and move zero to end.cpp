//https://practice.geeksforgeeks.org/problems/ease-the-array/0
//Ease the Array
//Double the first element and move zero to end
//https://www.geeksforgeeks.org/double-first-element-move-zero-end/

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
       int n = 0 , i = 0, j = 0, count = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       for( i = 0 ; i < n-1 ; i++ )
       {
           if ((a[i] == a[i+1]) && (a[i] != 0))
           {
               a[i] = 2*a[i];
               a[i+1] = 0;
           }
       }
       
       for (i = 0 ; i < n ; i++ )
       {
           if(a[i] != 0)
           {
               count++;
           }
       }
       
       for (i = 0 ; i<n ; i++ )
       {
           if(a[i] != 0)
           {
               cout<<a[i]<<" ";
           }
       }
       
       for( i = 0 ; i< n - count; i++)
       {
           cout<<0<<" ";
       }
       cout<<endl;
    }
    return 0;
}
