//https://www.geeksforgeeks.org/minimum-product-k-integers-array-positive-integers/
//Minimum Product of k Integers

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
       long long int n = 0 , i = 0 , k = 0, prod = 1;
       cin>>n;
       long long int *a = new long long int[n];
       const unsigned int M = 1000000007; 
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       cin>>k;
       
       sort(a,a+n);
       
       for(i=0 ; i<k ; i++)
       {
           prod = ( prod * a[i] ) % M;;
       }
       cout<<prod;
       
       cout<<endl;
    }
    return 0;
}
