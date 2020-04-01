//https://practice.geeksforgeeks.org/problems/reorganize-the-array/0
//https://www.geeksforgeeks.org/rearrange-array-arri/
//Reorganize The Array

/*
Input:
2
10
-1 -1 6 1 9 3 2 -1 4 -1
3
2 0 1
Output:
-1 1 2 3 4 -1 6 -1 -1 9
0 1 2
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
       int n = 0 , i = 0, x = 0;
       cin>>n;
       int *a = new int[n];
       for (i = 0 ; i<n ; i++ )
       {
            a[i] = -1;
       }
       for (i = 0 ; i<n ; i++ )
       {
            cin>>x;
            if(x != -1)
            {
                a[x] = x;
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
