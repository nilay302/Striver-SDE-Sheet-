#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> ans;
        for(int i = 0;i<nums.size();i++){
            ans.insert(nums[i]);
        }
        
        int maxCount = 0;
        for(int i = 0;i<nums.size();i++){
            if(ans.find(nums[i]-1)==ans.end()){
                int j = nums[i];
                int count = 0;
                while(ans.find(j)!=ans.end()){
                    count++;
                    j++;
                }
                if(count>maxCount) maxCount = count;
            }
        }
        return maxCount;
    }
};