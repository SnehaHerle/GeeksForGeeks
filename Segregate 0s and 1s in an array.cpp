//https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/
//Segregate 0s and 1s in an array
//https://practice.geeksforgeeks.org/problems/binary-array-sorting/0
//Binary Array Sorting

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
       int n = 0 , i = 0, count_0 = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
           if( a[i] == 0 )
           {
               count_0++;
           }
       }
       for(i = 0; i<count_0; i++ )
       {
           a[i] = 0;
       }
       for(i = count_0 ; i< n ; i++)
       {
           a[i] = 1;
       }
       for(i = 0 ; i<n ; i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}
