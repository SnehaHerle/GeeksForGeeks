//https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements/0
//At least two greater elements

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
       int n = 0 , i = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       sort(a, a+n);
       
       for(i=0 ; i<n-2 ; i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}
