#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    void combinationSum(vector<int> &arr,vector<vector<int>>&ans,vector<int>&a,int n,int k,int ind){
        if(k==0){
            ans.push_back(a);
            return;
        }
        for(int i = ind;i<n;i++ ){
            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>k)break;
            a.push_back(arr[i]);
            combinationSum(arr,ans,a,n,k-arr[i],i+1);
            a.pop_back();
        }
    }   
    vector<vector<int>> combinationSum2(vector<int>& arr, int k) {
    // unordered_set<vector<int>>cd;
    vector<vector<int>>ans;
    vector<int>a;
    sort(arr.begin(),arr.end());
    combinationSum(arr,ans,a,arr.size(),k,0);
    return ans;
    }
};