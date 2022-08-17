#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void combinations( vector<int>& candidates,vector<vector<int>>&ans, vector<int>&a,int index,int target,int len){
        if(index == len){
            if(target == 0){
                ans.push_back(a);
            }
            return;
        }
        if(candidates[index]<=target){
            a.push_back(candidates[index]);
            combinations(candidates,ans,a,index,target - candidates[index],len);
            a.pop_back();
        }
        combinations(candidates,ans,a,index+1,target,len);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>a;
        combinations(candidates,ans,a,0,target,candidates.size());
        return ans;
    }
};