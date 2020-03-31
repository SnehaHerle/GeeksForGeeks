//https://practice.geeksforgeeks.org/problems/rotation/0

/*
2
5
5 1 2 3 4
5
1 2 3 4 5
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
       long long int n = 0 , i = 0, pos = 0 , flag = 0;
       cin>>n;
       long long int *a = new long long int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       pos = 0;
       for (i = 0 ; i<n-1 ; i++ )
       {
           if(a[i]>a[i+1])
           { 
               pos = i;
               flag = 1;
               break;
           }
       }
       if (flag == 1)
       {
           cout<<pos+1;
       }
       else
       {
           cout<<0;
       }
       cout<<endl;
    }
    return 0;
}
