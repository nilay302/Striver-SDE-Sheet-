#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int prev_i = -1 ;
        for(int i = 0;i<n-2;i++){
            if( prev_i!=-1 &&  nums[prev_i]==nums[i]){
                continue;
            }
            else{
              int sum = -nums[i];
            int low = i+1;
            int high = n-1;
            int prev_low = low ;
            int prev_high = high ;
            int flag = 0;
            while(low<high){
                if(nums[low]+nums[high]==sum){
                    if((nums[low] == nums[prev_low] && nums[high]==nums[prev_high])&&(flag != 0) ){
                        // cout<<nums[low]<<" "<<nums[high]<<endl;
                        low++;
                        high--;
                    }
                    else{
                    vector<int>t1;
                    t1.push_back(nums[i]);
                    t1.push_back(nums[low]);
                    t1.push_back(nums[high]);
                    ans.push_back(t1); 
                    prev_low  = low;
                    prev_high = high;
                    low++;
                    high--;
                    }
                    
                    flag =1;
                   
                }
                else if(nums[low]+nums[high]<sum)low++;
                else  high--;
            }  
            }
            
            prev_i = i;
        }
        return ans;
    }
};