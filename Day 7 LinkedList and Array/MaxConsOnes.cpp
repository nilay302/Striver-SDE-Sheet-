#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int count = 0;
        for(int i:nums){
            if(i==1)count++;
            else{
                count = 0;
            }
            max_count = max(count,max_count);
        }
        return max_count;
    }
};