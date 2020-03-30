//https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0
/*
Input:
3
9
5 6 7 8 9 10 1 2 3
10
3
3 1 2
1
4
3 5 1 2
6
*/

//https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/  <-- Better Method here

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
        long long int n = 0, k = 0, count_rotation = 0, last_element = 0, high = 0,
        low = 0 , mid = 0, found = 0;
        cin>>n;
        long long int *a = new long long int[n]; 
        
        for (long long int i = 0; i < n; i++)
        {
             cin>>a[i];
        }
        
        cin>>k;
        //Count the number of rotations
        while( a[0] > a[n-1] )
        {
            count_rotation++;
            last_element = a[n-1];
            for (int i = n-1 ; i > 0 ; i-- )
            {
                a[i] = a[i-1];
            }
            a[0] = last_element;
        }
        
        high = n-1;
        while( low <= high )  //Binary Search
        {
            mid = (high + low)/2;
            if(a[mid] == k )
            {
                found = 1;
                break;
            }
            else if (a[mid] > k)
            {
                high = mid - 1;    
            }
            else
            {
                low = mid + 1;
            }
        }
        if (found == 0)
        {
            cout<<-1;
        }
        else
        {
            if(mid < count_rotation)     // Now : 1,2,3,4,5    Initially : 5,4,1,2,3    k = 2 
            {
                cout<<((n-1)-(count_rotation - (mid+1)));
            }
            else
            {
                cout<<mid - count_rotation;
            }
        }
        
        cout<<endl;
        
    }
    return 0;
}
