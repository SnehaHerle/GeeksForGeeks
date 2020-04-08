//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d40bb
//Plates (9pts, 15pts)

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include<map>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=0;
    cin>>t;
    for(int z = 1; z<=t ; z++)
    {
        int n = 0, k = 0 , i=0, j=0, p = 0, st[51][1501] = {0}, dp[51][1501] = {0}, sum[51][1501] = {0};
        cin>>n>>k>>p;
        for(i=0; i<n ; i++)
        {
            for(j=0 ; j<k; j++)
            {
                cin>>st[i][j];
            }
        }
        
        for(i=0; i<n ; i++)
        {
            sum[i][0] = 0;
            int temp = 0;
            for(j=1 ; j<=k; j++)
            {
                
                temp = temp + st[i][j-1];
                sum[i][j] = temp;
                
            }
            
        }
        
        for( i=0 ; i<n ; i++ )
        {
            for ( j=0 ; j<=p ; j++)
            {
                dp[i][j] = 0;
                for( int x=0 ; x<=MIN(j,k) ; x++ )
                {
                    dp[i][j] = MAX(dp[i][j], sum[i][x]+dp[i-1][j-x]);
                }
            }
        }
        
        cout<<"Case #"<<z<<": "<<dp[n-1][p]<<endl;
        
    }
    return 0;
}
