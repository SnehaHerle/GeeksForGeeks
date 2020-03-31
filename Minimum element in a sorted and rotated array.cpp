//https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array/0
//https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/

/*
Input
2
5
4 5 1 2 3
6
10 20 30 40 50 5 7

Output
1
5
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
       int n = 0 , i = 0, high = 0, low = 1, mid = 0, flag = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       //Binary Search
       
       low = 0;
       high = n-1;
       //cout<<"High = "<<high<<" Low = "<<low<<endl;
       while (low <= high)
       {
           mid = (low + high)/2;
           
           //cout<<"Mid = "<<mid<<" High = "<<high<<" Low = "<<low<<endl;
           
           if ((a[mid] < a[mid-1]) && (a[mid] < a[mid+1]))
           {
               cout<<a[mid];
               flag = 1;
               break;
           }
           else if (a[mid] > a[n-1])
           {
               low = mid + 1;
           }
           else
           {
               high = mid - 1;
           }
       }
       if(flag == 0 && mid != n-1)
       {
           cout<<a[0];
       }
       else if (flag == 0)
       {
           cout<<a[mid];
       }
       cout<<endl;
       //cout<<"T = "<<t<<endl;
    }
    return 0;
}
