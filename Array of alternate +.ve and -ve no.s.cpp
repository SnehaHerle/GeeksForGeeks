//https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos/0
//Array of alternate +ve and -ve no.s

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
       long long int n = 0 , i = 0, j = 0, k = 0,temp_j = 0, temp_k = 0;
       cin>>n;
       long long int *a = new long long int[n];
       long long int *pos = new long long int[n];
       long long int *neg = new long long int[n];
       long long int *final = new long long int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       for (i = 0 ; i<n ; i++ )
       {
           //cout<<"a[i] "<<a[i];
           if(a[i] >= 0)
           {
               pos[j] = a[i];
               //cout<<"pos[j] "<<pos[j];
               j++;
               
           }
           else
           {
               neg[k] = a[i];
               //cout<<"neg[k] "<<neg[k];
               k++;
               
           }
           //cout<<endl;
       }
       //cout<<endl;
       pos[j] = 999999999;
       neg[k] = 999999999;
       temp_j = j;
       temp_k = k;
       for (i = 0 ; i<n ; i++ )
       {
           if(pos[i] == 999999999)
           {
               break;
           }
           //cout<<pos[i]<<" ";
       }
       //cout<<endl;
       for (i = 0 ; i<n ; i++ )
       {
           if(neg[i] == 999999999)
           {
               break;
           }
           //cout<<neg[i]<<" ";
       }
       
       for(i = 0 , j = 0, k = 0 ; i<n;i++)
       {
            if(((i%2 == 0) && (j<temp_j)) || (k>=temp_k))
            {
                final[i] = pos[j];
                j++;
            }
            else if (((i%2 != 0) && (k<temp_k)) || (j>=temp_j))
            {
                final[i] = neg[k];
                k++;
            }
       }
       for(i = 0 ; i<n;i++)
       {
           cout<<final[i]<<" ";
       }
       cout<<endl;
       
    }
    return 0;
}
