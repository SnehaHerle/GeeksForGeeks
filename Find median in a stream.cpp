//https://practice.geeksforgeeks.org/problems/find-median-in-a-stream/0
//Find median in a stream
//https://www.geeksforgeeks.org/median-of-stream-of-running-integers-using-stl/

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
    
    
    
       long int n = 0 , num = 0, i = 0;
       cin>>n;
       long int a[1000001] = {0};
       priority_queue<long int> s;   //max_heap
       priority_queue<long int,vector<long int>,greater<long int> > g; //min_heap
       
       for (i = 0 ; i<n ; i++ )  // store the array as vector
       {
           cin>>a[i];
       }
       
       long int med = a[0];
       
       cout<<med<<endl;
       s.push(a[0]); 
       
       for (i=1; i < n; i++) 
       {
           long int x = a[i];
           
           if (s.size() > g.size())   //sizeof maxheap > minheap
           {
               
               if (x < med) 
               {
                   g.push(s.top());
                   s.pop();
                   s.push(x);
               }
               else
               {
                   g.push(x);
               }
               
               med = (s.top() + g.top())/2.0;
           }
           else if (s.size()==g.size()) 
           {
              
               if (x < med) 
               {
                   s.push(x); 
                   med = (long int)s.top(); 
               }
               else
               {
                   g.push(x);
                   med = (long int)g.top(); 
               }
           }
           else
           {
               
               if (x > med) 
               {
                   s.push(g.top());
                   g.pop(); 
                   g.push(x);
               }
               else
               {
                   s.push(x);
               }
               
               med = (s.top() + g.top())/2.0;
           }
           
        cout << med << endl;    
       }
    
    return 0;
}
