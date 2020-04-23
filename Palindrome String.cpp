/*
https://practice.geeksforgeeks.org/problems/palindrome-string/0

Palindrome String
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
       int n = 0 , i = 0, flag = 1;
       string s;
       cin>>n>>s;
       for(i=0 ; i<n/2 ; i++)
       {
           if(s[i] != s[n-1-i])
           {
               cout<<"No";
               flag = 0;
               break;
           }
       }
       if(flag == 1)
            cout<<"Yes";
       cout<<endl;
    }
    return 0;
}
