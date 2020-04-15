//https://practice.geeksforgeeks.org/contest-problem/m-and-n5047/0/
//M and N
//Given two positive integers M and N, after adding M and N if number of digits in M+N and N are same return N otherwise return M+N.Given two positive integers M and N, after adding M and N if number of digits in M+N and N are same return N otherwise return M+N.
//Constraints:
//1 <= T <= 100
//1 <= M <= 10^9
//1 <= N <=10^9

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
    while(t--)
    {
       string m,n;
       long long int sum = 0;
       cin>>m>>n;
       sum = stol(m)+stol(n);
       if ((to_string(sum)).length() == n.length())
       {
           cout<<n;
       }
       else
       {
           cout<<sum;
       }
       //cout<<stol(m)+stol(n);
       cout<<endl;
    }
    return 0;
}
