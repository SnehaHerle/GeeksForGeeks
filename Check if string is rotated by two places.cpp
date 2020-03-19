//Learning from the editorial - https://www.geeksforgeeks.org/check-string-can-obtained-rotating-another-string-2-places/

#include<iostream>
using namespace std; 

  
// Function to check if string2 is obtained by string 1 by 2 rotations
bool isRotated(string str1, string str2) 
{ 
    if (str1.length() != str2.length()) 
        return false; 
  
    string clock_rot = "", anticlock_rot = ""; 
    int len = str2.length(); 
  
    // Initialize string as anti-clockwise rotation 
    anticlock_rot = anticlock_rot + str2.substr(len-2, 2) + str2.substr(0, len-2) ; 
  
    // Initialize string as clock wise rotation 
    clock_rot = clock_rot + str2.substr(2) + str2.substr(0, 2) ; 
  
    // check if any of them is equal to string1 
    return (str1.compare(clock_rot) == 0 || str1.compare(anticlock_rot) == 0); 
} 
  
// Driver code 
int main() 
{ 
    int t = 0;
    cin>>t;
    while(t--)
    {
        string str1 = {}, str2 = {};
        cin>>str1>>str2;
        isRotated(str1, str2) ? cout << "1" : cout << "0"; 
        cout<<endl;
    }

    return 0; 
} 
