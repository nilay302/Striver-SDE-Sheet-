#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 =0,c2=0;
        int n = nums.size();
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        for(int i:nums){
            if(i==ele1)c1++;
            else if(i == ele2)c2++;
            else if(c1==0){
                ele1 = i;
                c1=1;
            }
            else if(c2==0){
                ele2=i;
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int>ans;
       int cnt1=0;
        for(auto i :nums){
            if(i==ele1)cnt1++;
        }
        if(cnt1>n/3)ans.push_back(ele1);
         cnt1=0;
        for(auto i :nums){
            if(i==ele2)cnt1++;
        }
        if(cnt1>n/3)ans.push_back(ele2);
        return ans;
        
    }
};