//Round A 2020 - Kick Start 2020
//Allocation (5pts, 7pts)
//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56

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
    for(int k = 1; k<=t ; k++)
    {
        int n = 0, b = 0, sum = 0, count = 0;
        cin>>n>>b;
        int *a = new int[n]; 
        
       for (int i = 0; i < n; i++)
        {
             cin>>a[i];
        }
        
        sort(a,a+n);
        
        sum = 0;
        
        for(int i=0 ; i<n ; i++)
        {
            if( a[i]<=b )
            {
                sum = sum + a[i];
                b = b - a[i];
                count++;
            }
            else
            {
                break;
            }
        }
        
        cout<<"Case #"<<k<<": "<<count<<endl;
        
    }
    
    return 0;
}
