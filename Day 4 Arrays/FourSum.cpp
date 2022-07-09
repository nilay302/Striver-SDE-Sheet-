class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.size()==0)return ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int left = j+1;
                int right = n-1;
                long long int required = (long long)target - nums[i]-nums[j];
                while(left<right){
                   long long  int sum = nums[left]+nums[right];
                    if(sum>required)right--;
                    else if (sum<required)left++;
                    else{
                        vector<int>ans1;
                        ans1.push_back(nums[i]);
                        ans1.push_back(nums[j]);
                        ans1.push_back(nums[left]);
                        ans1.push_back(nums[right]);
                        ans.push_back(ans1);
                        
                        //removing duplicates
                    while(left<right && nums[left]==ans1[2])++left;
                    while(left<right && nums[right]==ans1[3])--right;
                    }
                    
                }
                //removing duplicates in j
                while(j+1<n && nums[j+1]==nums[j])++j;
                
                }
            //removing duplicates in i
                while(i+1<n && nums[i+1]==nums[i])++i;
                
        }
        return ans;
    }
};