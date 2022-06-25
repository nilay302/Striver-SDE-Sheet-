#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int j;
        int index;
        int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                j=nums[i];
                index = i;
                break;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(nums[i]>j){
                swap(nums[index],nums[i]);
                break;
            }
        }
       reverse(nums.begin()+index+1,nums.end());
    }
};