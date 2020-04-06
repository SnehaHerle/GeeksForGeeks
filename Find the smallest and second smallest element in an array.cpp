//https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array/0
//Find the smallest and second smallest element in an array

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
       int n = 0, i = 0,num = 0, min = 0, min_2 = 0, flag = 0;
       cin>>n;
       vector<long int> vec;
       
       for (i = 0 ; i<n ; i++ )  // store the array as vector
       {
           cin>>num;
           vec.push_back(num);
       }
       
       priority_queue <int, vector<int>, greater<int> > pq(vec.begin(), vec.end());   
       //priority_queue <int, vector<int> > pq(vec.begin(), vec.end());
        
        min = pq.top();
        while(n--)
        {
            pq.pop();
            min_2 = pq.top();
            if (min != min_2)
            {
                cout<<min<<" "<<min_2;
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
