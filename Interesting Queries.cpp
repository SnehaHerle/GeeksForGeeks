//MO's Algorithm - https://www.geeksforgeeks.org/mos-algorithm-query-square-root-decomposition-set-1-introduction/
//https://practice.geeksforgeeks.org/problems/interesting-queries/0
//Interesting Queries

#include <bits/stdc++.h> 
using namespace std; 

long long int block; 

struct Query 
{ 
	long long int L, R, index; 
}; 


bool compare(Query x, Query y) 
{ 
	if (x.L/block != y.L/block) 
		return x.L/block < y.L/block; 

	return x.R < y.R; 
} 


void queryResults(long long int a[], long long int n, Query q[],long long int m, long long int h[],long long int k) 
{ 
	block = (long long int)sqrt(n); 
	sort(q, q + m, compare); 

	long long int currL = 0, currR = 0, count = 0, answer[10011] = {0};     //The answer array stores the answers of all the queries. 

	for (long long int i=0; i<m; i++) 
	{ 
		long long int L = q[i].L - 1, R = q[i].R - 1; 
		
		while (currL < L)   //These elements are not needed in the current range. So we have to remove them.
		{ 
			h[a[currL]]--;   //Decrease the element's occurence from the hash array by 1.
			if(h[a[currL]] == k-1)  //If after decreasing, the hash has is k-1, then it was included in the count as well. So we decrease the count by 1.
			    count--;
			currL++; 
		} 
		while (currL > L) //These elements are to be added as they fall in the current range.
		{ 
			h[a[currL-1]]++;   //Increase the hash value by 1.
			if(h[a[currL-1]] == k)   //If after increasing the hash value it is equal to k, then include it in the count.
			    count++;
			currL--; 
		} 
		while (currR <= R)    //These elements are to be added as they fall in the current range.
		{ 
			h[a[currR]]++;  //Increase the hash value by 1.
			if(h[a[currR]] == k) //If after increasing the hash value it is equal to k, then include it in the count.
			    count++;
			currR++; 
		} 
		while (currR > R+1)  //These elements are not needed in the current range. So we have to remove them.
		{
			h[a[currR-1]]--;  //Decrease the element's occurence from the hash array by 1. 
			if(h[a[currR-1]] == k-1)  //If after decreasing, the hash has is k-1, then it was included in the count as well. So we decrease the count by 1.
			    count--;
			currR--; 
		}
		
		answer[q[i].index] = count;   // To preserve of the order of queries.
		
	} 
	for(long long int i = 0; i < m ; i++)
	    cout<<answer[i]<<" ";
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t=0;
    cin>>t;
    while(t--)
    {
		//h is the array which is used for hashing here. Example h[1] will store the count of 1s in the array.
       long long int n = 0 , i = 0, k = 0, m = 0 , h[1001] = {0};   
       Query q[10011];
       cin>>n>>m>>k;
       long long int *a = new long long int[n];
       
       for (i = 0 ; i<n ; i++ )
           cin>>a[i];
        
        for (i = 0; i<m ; i++)
        {
            cin>>q[i].L>>q[i].R;
            q[i].index = i;
        }
            
       //Based on MO's algorithm. Complexity - O((m+n) * √n) 
       queryResults(a, n, q, m, h, k);
       cout<<endl;
    }
    return 0;
}
