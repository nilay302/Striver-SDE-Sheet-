
#include<bits/stdc++.h>
using namespace std;
void subset (vector<int>&ans,int N,vector<int>&arr,int i,int sum){
        if(i==N){
           ans.push_back(sum);
           return;
        }
        subset(ans,N,arr,i+1,sum+arr[i]);
        subset(ans,N,arr,i+1,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        subset(ans,N,arr,0,0);
        sort(ans.begin(),ans.end());
        return ans;
    }