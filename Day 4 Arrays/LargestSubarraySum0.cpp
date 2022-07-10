#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map <int,int> ans;
        int sum = 0;
        int maxlength = 0;
        for(int i = 0;i<n;i++){
            sum+=A[i];
            if(sum==0) maxlength = i+1;
            else if(ans.find(sum)!=ans.end()){
                int length = i-ans[sum];
                maxlength = max(maxlength,length);
            }
            else
            ans[sum]=i;
            
            
        }
        if (sum==0)return n;
        return maxlength;
    }
};