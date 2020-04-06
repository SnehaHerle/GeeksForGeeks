//https://practice.geeksforgeeks.org/problems/help-a-thief/0
//Help a Thief!!!

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Driver function to sort the vector elements by  
// first element of pair in descending order 
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.second > b.second); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    while(t--)
    {
       int n = 0 , k = 0, num = 0, i = 0, sum = 0, flag = 0;
       cin>>k>>n;
       int *p = new int[n];
       int *c = new int[n];
       vector< pair <int,int> > vec;   //(coins, plate)
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>p[i]>>c[i];
       }
       
       for (i = 0 ; i<n ; i++ )
       {
           vec.push_back( make_pair(p[i],c[i]));   //(coins, plate)
       }
       
       
       
    //   for (int i=0; i<n; i++) 
    //     { 
    //     // "first" and "second" are used to access 
    //     // 1st and 2nd element of pair respectively 
    //         cout << vec[i].first << " "<< vec[i].second << endl; 
    //     } 
         
        sort(vec.begin(), vec.end(), sortinrev);
        
        // for (int i=0; i<n; i++) 
        // { 
        // // "first" and "second" are used to access 
        // // 1st and 2nd element of pair respectively 
        //     cout << vec[i].first << " "<< vec[i].second << endl; 
        // } 
        
            i = 0;
            while(i<n && k>0) //for(int i = 0 ; i<n , k>0 ; i++)
            {
                if (k >= vec[i].first)
                {
                    sum = sum + (vec[i].second * vec[i].first);
                    k = k - vec[i].first;
                }
                else
                {
                    sum = sum + k*vec[i].second;
                    k = 0;
                }
                i++;
            }
        
        cout<<sum;
       cout<<endl;
    }
    return 0;
}
