/*
https://practice.geeksforgeeks.org/problems/value-equal-to-index-value/0

Value equal to index value
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
       int n = 0 , i = 0, flag = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++)
       {
           cin>>a[i];
       }
           
           
        for (i = 0 ; i<n ; i++)
        {
            if((a[i])==(i+1))
            {
                cout<<i+1<<" ";
                flag = 1;
            }
                
        }
        if(flag == 0)
            cout<<"Not Found";
       cout<<endl;
    }
    return 0;
}
