/*
https://practice.geeksforgeeks.org/problems/count-type-of-characters/0

Count type of Characters

Approach :

Scan string str from 0 to length-1.
check one character at a time on the basis of ASCII values
if(str[i] >= 65 and str[i] <=90), then it is uppercase letter,
if(str[i] >= 97 and str[i] <=122), then it is lowercase letter,
if(str[i] >= 48 and str[i] <=57), then it is number,
else it is a special character
Print all the counters.
*/

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
       int upper = 0 , lower = 0, number = 0, special = 0, len = 0;
       string s;
       cin>>s;
       len = s.length() - 1;
       while(len>=0)
       {
           if(s[len] >= 65 && s[len] <=90)
                upper++;
            else if (s[len] >= 97 && s[len] <=122)
                lower++;
            else if (s[len] >= 48 && s[len] <=57)
                number++;
            else
                special++;
           len--;
       }
       cout<<upper<<endl<<lower<<endl<<number<<endl<<special<<endl;
    }
    return 0;
}
