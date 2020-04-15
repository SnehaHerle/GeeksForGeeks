//https://practice.geeksforgeeks.org/contest-problem/triangle-and-square/0/
//Triangle and Square

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
       int b = 0;
       cin>>b;
       if( b == 0 || b == 1 || b == 2 || b == 3 )
       {
           cout<<0;
       }
       else if( b%2 == 0 )
       {
           b = (b - 2)/2;
           cout<<((b+1)*b)/2;
       }
       else
       {
           b = ((b-1)-2)/2;
           cout<<((b+1)*b)/2;
       }
       cout<<endl;
    }
    return 0;
}
