//https://practice.geeksforgeeks.org/problems/find-median-in-a-stream/0
//Find median in a stream
//https://www.geeksforgeeks.org/median-of-stream-of-running-integers-using-stl/

/* 
Explanation - 
Why minheap and maxheap?

1 2 3 4 - Lower half - Stored in max heap - Root is 4 
5 6 7 8 - Upper half - Stored in min heap - Root is 5
1 2 3 4 5 6 7 8 - Median will beb (4+5)/2, and we can retrieve 4, 5 easily from the roots of the heap.

Whichever heap is bigger in size will have its root as the median, and if both sizes are equal, any root will be median.

1) If max heap is bigger - root is median - lower half
    1.1) if current element < median - move root to minheap and insert current element in maxheap
    1.2) else - insert current element in minheap
2) If min heap is bigger - root is median - upper half
    2.1) if current element > median - move root to maxheap and insert current element in minheap
    2.2) else - insert current element in maxheap
3) If both sizes are equal - 
    3.1) if current element > median - insert in minheap
    3.2) else - insert in maxheap
    
*/


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
