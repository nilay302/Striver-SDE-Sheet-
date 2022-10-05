#include<bits/stdc++.h>
using namespace std;

//we swap all the index and find all the permutations.

class Solution {
public:
    void Permutations(vector<int>&nums, int n,vector<vector<int>>&a){
    if(n==nums.size()){
      a.push_back(nums);
        return;
    }
   for(int i=n;i<nums.size();i++){
       swap(nums[n],nums[i]);
       Permutations(nums,n+1,a);
       swap(nums[n],nums[i]);
   }
}

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>a;
        Permutations(nums,0,a);
        return a;
    }
};