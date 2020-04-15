//https://practice.geeksforgeeks.org/problems/print-k-smallest-elements-in-their-original-order/0
//Print K smallest elements in their original order

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int h[100001]={0};   //hashing (a[1],count of 1)
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            h[a[i]]++;
        }
        int x=k;
        vector<int>v;
        for(int i=0;i<100001;i++)
        {
            if(h[i]>0)
            {
                for(int j=0;j<h[i];j++)
                {
                    v.push_back(i);   // in the vector they are inserted in sorted order
                }
                x=x-h[i];
                if(x==0)
                {
                    break;
                }
            }
        }
        int dp[100001]={0};
        for(int i=0;i<k;i++)   // taking first k elements from vector and storing in hash
        {
            dp[v[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(dp[a[i]]>0)
            {
                cout<<a[i]<<" ";
                k=k-1;
                dp[a[i]]-=1;
                if(k==0)
                {
                    break;
                }
            }
        }
        
        cout<<endl;
    }
	//code
	return 0;
}
