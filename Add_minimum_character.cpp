/*
Given a string str, find the minimum characters to be added at front of the string to make it a palindrome.

Input:
str = ABCD
Output: 3
Explanation: The resultant string 
after adding 3 characters is DCBABCD.
The minimum possible answer is 3.

Example 2:

Input:
str = ABA
Output: 0
Explanation: The given string
is already a palindrome.*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
