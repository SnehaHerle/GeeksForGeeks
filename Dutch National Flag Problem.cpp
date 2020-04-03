//https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-numbers/0
//Segregate Even and Odd numbers
//https://www.geeksforgeeks.org/segregate-even-and-odd-numbers/
//http://www.csse.monash.edu.au/~lloyd/tildeAlgDS/Sort/Flag/

/*
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
       int n = 0 , i = 0, num = 0, even_i = 0, odd_i = 0, e_count = 0, o_count = 0;
       cin>>n;
       int even[100001] ,odd[100001];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>num;
           if ( num%2 == 0 )
           {
               even[even_i] = num;
               even_i++;
               e_count++;
           }
           else
           {
               odd[odd_i] = num;
               odd_i++;
               o_count++;
           }
       }
       sort(even, even + e_count);
       sort(odd, odd + o_count);
       for( i = 0 ; i < e_count ; i++ )
       {
           cout<<even[i]<<" ";
       }
       for( i = 0 ; i < o_count ; i++ )
       {
           cout<<odd[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}
*/

//Dutch National Flag Problem -- But the order of elements is not maintained.
//https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-numbers/0
//Segregate Even and Odd numbers
//https://www.geeksforgeeks.org/segregate-even-and-odd-numbers/
//http://www.csse.monash.edu.au/~lloyd/tildeAlgDS/Sort/Flag/

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
       int n = 0 ,i = 0, left = 0, right = 0;
       cin>>n;
       int *a = new int[n];
       
       for (i = 0 ; i<n ; i++ )
       {
           cin>>a[i];
       }
       
       left = 0, right = n-1; 
        while (left < right) 
        { 
        /* Increment left index while we see 0 at left */
            while (a[left] % 2 == 0 && left < right) 
                left++; 
  
        /* Decrement right index while we see 1 at right */
            while (a[right] % 2 == 1 && left < right) 
                right--; 
  
            if (left < right) 
            { 
            /* Swap arr[left] and arr[right]*/
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left++; 
            right--; 
            } 
        } 
       
       for (i = 0 ; i<n ; i++ )
       {
           cout<<a[i]<<" ";
       }
       
       cout<<endl;
    }
    return 0;
}
