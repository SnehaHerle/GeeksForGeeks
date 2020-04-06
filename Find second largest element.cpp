//https://practice.geeksforgeeks.org/problems/find-second-largest-element/0
//Find second largest element

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
       int n = 0 , k = 2, num = 0, i = 0, max = 0, max_2 = 0, flag = 0;
       cin>>n;
       vector<long int> vec;
       
       for (i = 0 ; i<n ; i++ )  // store the array as vector
       {
           cin>>num;
           vec.push_back(num);
       }
       
       //priority_queue <int, vector<int>, greater<int> > pq(vec.begin(), vec.end());   -- Min heap
       priority_queue <int, vector<int> > pq(vec.begin(), vec.end());
        
        max = pq.top();
        while(n--)
        {
            pq.pop();
            max_2 = pq.top();
            if (max != max_2)
            {
                cout<<max_2;
                flag = 1;
                break;
            }
        }
        
        if (flag == 0)
        {
            cout<<-1;
        }
	    
       cout<<endl;
    }
    return 0;
}
