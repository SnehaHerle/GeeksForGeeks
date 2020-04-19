//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d82e6

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
        int n = 0, count = 0;
        cin>>n;
        int *a = new int[n]; 
        
        for (int i = 0; i < n; i++)
        {
             cin>>a[i];
        }
        
        
        for(int i=1 ; i<n-1 ; i++)
        {
            if(( a[i]>a[i-1] ) && ( a[i] > a[i+1] ))
            {
                count++;
            }
        }
        
        cout<<"Case #"<<k<<": "<<count<<endl;
        
    }
    
    return 0;
}
