//Largest Number formed from an Array
//https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array/0
//https://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int myCompare(string X, string Y) 
{ 
    // first append Y at the end of X 
    string XY = X.append(Y); 
  
    // then append X at the end of Y 
    string YX = Y.append(X); 
  
    // Now see which of the two formed numbers is greater 
    return XY.compare(YX) > 0 ? 1: 0; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
       int n = 0 , i = 0, r = 0, k = 0;
       cin>>n;
       vector<string> a(n);
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       sort(a.begin(), a.end(), myCompare); 
       
       for (i = 0 ; i<n ; i++ )
       {
           cout<<a[i];
       }
       
       cout<<endl;
    }
    return 0;
}
