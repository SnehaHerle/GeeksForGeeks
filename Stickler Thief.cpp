//https://practice.geeksforgeeks.org/problems/stickler-theif/0
//https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
//Stickler Thief
//O(n)
//Dynamic Programming

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int findMaxSum(int a[], int n) 
{ 
    int incl_prev = a[0], excl_prev = 0, excl_cur, incl_cur, i;

    for (i = 1; i < n; i++) 
    { 
	    excl_cur = (incl_prev > excl_prev)? incl_prev: excl_prev; 
	    incl_cur = excl_prev + a[i]; 
	    excl_prev = excl_cur;
	    incl_prev = incl_cur;
    } 

    return ( (incl_prev > excl_prev)? incl_prev : excl_prev); 
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
       int n = 0 , i = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
           cin>>a[i];
       
       cout<<findMaxSum(a,n)<<endl;
    }
    return 0;
}


Dynamic Programming is mainly an optimization over plain recursion. Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming. The idea is to simply store the results of subproblems, so that we do not have to re-compute them when needed later. This simple optimization reduces time complexities from exponential to polynomial. For example, if we write simple recursive solution for Fibonacci Numbers, we get exponential time complexity and if we optimize it by storing solutions of subproblems, time complexity reduces to linear. 

