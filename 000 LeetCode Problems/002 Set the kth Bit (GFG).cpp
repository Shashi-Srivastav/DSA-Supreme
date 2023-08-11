//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // int mask = 1 << K;
        // int ans = N | mask;
        // return ans;
        return N | (1<<K);
    }
    
};

