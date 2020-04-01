//Minimum swaps and K together
//https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0
//https://www.geeksforgeeks.org/minimum-swaps-required-bring-elements-less-equal-k-together/

#include <bits/stdc++.h>
#include<iostream>
using namespace std;


//logic is to count the number of elements to be swapped as to_swap in each sliding window of
//size 'together' and then find the minimum of all to_swap
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
       int n = 0 , i = 0, j = 0, k = 0, together = 0, to_swap = 0, min_swaps = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       cin>>k;
       
       for(i=0; i<n ; i++)
       {
           if (a[i] <= k)
           {
               together++;    //These many have to be together.
           }
       }
       
       if(together == 1)
       {
           cout<<0;
       }
       else
       {
       for(i=0 ; i<together ; i++)    //current window
       {
           if (a[i] > k)
           {
               to_swap++;
           }
       }
       
       min_swaps = to_swap;
       //cout<<"1 min_swaps : "<<min_swaps<<endl;
       
       for( i=1 ; i + together <=n; i++ )    //sliding window of 'together' number of elements
       {
           to_swap = 0;
           //cout<<"2 to_swap : "<<to_swap<<endl;
           for( j = i ; j < i + together ; j++ )
           {
               if (a[j] > k)
               {
                   to_swap++;
               }
           }
           if (min_swaps > to_swap)
           {
               min_swaps = to_swap;
           }
           //cout<<"2 min_swaps : "<<min_swaps<<endl;
           
       }
       cout<<min_swaps;
       }
       cout<<endl;
    }
    return 0;
}
