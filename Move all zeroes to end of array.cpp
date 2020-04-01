//Move all zeroes to end of array
//https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array/0#ExpectOP
//https://www.geeksforgeeks.org/move-zeroes-end-array/

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
       int n = 0 , i = 0, j = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       for (i = 0 ; i<n ; i++ )
       {
           if (a[i] == 0)
           {
               for (j = i+1 ; j<n ; j++)
               {
                   if(a[j] != 0)
                   {
                       a[i] = a[j];
                       a[j] = 0;
                       break;
                   }
               }
           }
       }
       for (i = 0 ; i<n ; i++ )
       {
           cout<<a[i]<<" ";
       }
       
       cout<<endl;
    }
    return 0;
}
