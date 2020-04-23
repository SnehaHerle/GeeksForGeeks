/*
https://practice.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1

Replace all 0's with 5

String to Int using stoi, and int to string using to_string
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int convertFive(int n);
 
// Driver program to test above function
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}// } Driver Code Ends
/*you are required to complete this method*/
int convertFive(int n)
{
    string s = to_string(n);
    int len = s.length()-1;
    while(len>=0)
    {
        if(s[len]=='0')
            s[len] = '5';
        len--;
    }
    return stoi(s);
}
