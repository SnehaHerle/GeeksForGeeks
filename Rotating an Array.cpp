//https://practice.geeksforgeeks.org/problems/reversal-algorithm/0

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include<map>
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
        int n = 0, d = 0, temp = 0, i = 0;
        cin>>n;
        
        int *a = new int[n];
        
        for (i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        cin>>d;
        if (d == 0) 
        {
            for (i = 0; i < n; i++)
            {
            cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
        while(d)
        {
            temp = a[0];
            for(i = 0 ; i < n-1 ; i++ )
            {
                a[i] = a[i+1];
            }
            a[n-1] = temp;
            d--;
        }
        
        for ( i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}
