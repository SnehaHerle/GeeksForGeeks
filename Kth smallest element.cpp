//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
//https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
//Kth smallest element

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
       cin>>n;
       vector<int> vec;
       
       for (i = 0 ; i<n ; i++ )  // store the array as vector
       {
           cin>>num;
           num = -num;
           vec.push_back(num);
       }
       
       cin>>k;
       
       //priority_queue <int, vector<int>, greater<int> > pq(vec.begin(), vec.end());   -- Min heap
       priority_queue <int, vector<int> > pq(vec.begin(), vec.end());  -- Max heap implemented with elements as -1*a[i] because it is easier to remember syntax of max heap.
       
       while (--k) 
       {
	        pq.pop();
	   }
	   
	   cout<<pq.top()*-1;     
       cout<<endl;
    }
    return 0;
}
