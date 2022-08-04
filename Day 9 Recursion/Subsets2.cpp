#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   
    void subset ( set<vector<int>> &ans,vector<vector<int>>&b,int N,vector<int>&nums,int i,vector<int>&a){
        if(i==N){
            // sort(a.begin(),a.end());
            if(ans.find(a)==ans.end()){
                b.push_back(a);
                ans.insert(a);
            }
           
           return;
        }
        a.push_back(nums[i]);
        subset(ans,b,N,nums,i+1,a);
        a.pop_back();
        subset(ans,b,N,nums,i+1,a);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int N =nums.size();
         vector<vector<int>>b;
        vector<int>a;
        subset(ans,b,N,nums,0,a);
        sort(b.begin(),b.end());
        return b;
    }
};