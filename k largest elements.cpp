//k largest elements
//https://www.geeksforgeeks.org/k-largestor-smallest-elements-in-an-array/
//https://practice.geeksforgeeks.org/problems/k-largest-elements/0

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
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
       int n = 0 , k = 0, num = 0, i = 0;
       cin>>n>>k;
       vector<int> vec;
       
       for (i = 0 ; i<n ; i++ )  // store the array as vector
       {
           cin>>num;
           vec.push_back(num);
       }
       
     
       priority_queue <int, vector<int> > pq(vec.begin(), vec.end());  -- Max heap
       
       while (k--) 
       { 
            cout<<pq.top()<<" ";  //Keep popping out the root which will be the maximum element.
	          pq.pop();
	      }
	  
       cout<<endl;
    }
    return 0;
}
