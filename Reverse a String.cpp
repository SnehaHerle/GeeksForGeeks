//https://practice.geeksforgeeks.org/problems/reverse-the-string/0
//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
//Reverse a String

#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
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
       int len = 0 , i = 0, r = 0, k = 0;
       string str = {}, rev = {}; 
       cin>>str;
       //cout<<str;
       len = str.length();
       //cout<<len;
       for (i = 0 ; i<len ; i++ )
       {
           //cout<<str[len-1-i]<<endl;
           rev[i] = str[len-1-i];
           //cout<<rev[i]<<endl;
       }
       for (i = 0 ; i<len ; i++ )
       {
           cout<<rev[i];
       }
       cout<<rev<<endl;
    }
    return 0;
}
