//https://practice.geeksforgeeks.org/problems/quick-left-rotation/0
//https://www.geeksforgeeks.org/quickly-find-multiple-left-rotations-of-an-array/

/*
1
5 14
1 3 5 7 9
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
       int n = 0 , i = 0, r = 0, k = 0;
       cin>>n>>r;
       int *a = new int[2*n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       for (i = n, k = 0 ; i<2*n ; i++ )
       {
           a[i] = a[k];
           k++;
       }
       r = r%n;
       for (i = r ; i<r+n ; i++ )
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}


/*
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
       int n = 0 , i = 0, r = 0, temp = 0;
       cin>>n>>r;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       r = r%n;
       
       while(r)
       {
           temp = a[0];
           for(i = 0 ; i < n-1 ; i++ )
           {
               a[i] = a[i+1];
           }
           a[i] = temp;
           r--;
       }
       for (i = 0 ; i<n ; i++ )
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}
*/
