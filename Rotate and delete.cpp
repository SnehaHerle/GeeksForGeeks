//https://practice.geeksforgeeks.org/problems/rotate-and-delete/0

#include <bits/stdc++.h>
#include<iostream>
#include <cstring>
#include<map>
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
        int n = 0;
        cin>>n;
        int *a = new int[n];
        
        for (int i = 0; i < n; i++)
        {
             cin>>a[i];
        }
        
        if(n%2 == 0)
        {
            cout<<a[((n-2)/4) + 1] << endl;
        }
        else if (n == 1)
        {
            cout<<a[0]<<endl;
        }
        else
        {
            cout<<a[((n-3)/4) + 2]<<endl;
        }
    }
    return 0;
}

/*
I learnt O(1) solution and the approach of thinking from this comment - 

Himanshu Poddar • 5 months ago • edited
For people who want the O(1) explaination for this solution, please try to solve it manually taking N=1 to 20, and you will find some pattern emerging in the answer index. The pattern starts emerging after N=1 at every interval of 4.

SIZE INDEX(answer)
size=1, position=0
----------------------------------------------------------------------------------------
size=2, position=1
size=3, position=2
size=4, position=1
size=5, position=2
----------------------------------------------------------------------------------------
size=6, position=2
size=7, position=3
size=8, position=2
size=9, position=3
----------------------------------------------------------------------------------------
size=10, position=3
size=11, position=4
size=12, position=3
size=13, position=4
----------------------------------------------------------------------------------------
size=14, position=4
size=15, position=5
size=16, position=4
size=17, position=5
----------------------------------------------------------------------------------------
size=18, position=5
size=19, position=6
size=20, position=5
size=21, position=6

for odd N : floor( (n-3)/4 )+2
for even N : floor( (n-2)/4 )+1

*/
