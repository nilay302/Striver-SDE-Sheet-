#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>>ans;
        int n =arr.size();
        unordered_map<int,int>mm;
   
        for(int i=0;i<n;i++){
            if(mm.find(s-arr[i])!=mm.end() ){
                vector<int>ans1;
               
                  if(arr[i]<(s-arr[i])){
                    ans1.push_back(arr[i]);
                ans1.push_back(s-arr[i]);
                      int freq = mm[s-arr[i]];
                      while(freq--){
                          ans.push_back(ans1);
                         
                      }
                
                }
                else{
                    ans1.push_back(s-arr[i]);
                ans1.push_back(arr[i]);
                     int freq = mm[s-arr[i]];
               while(freq--){
                          ans.push_back(ans1);
                          
                      }
                }
                  
                
               
                
            }
            mm[arr[i]]++;
        }
    sort(ans.begin(),ans.end());
        return ans;
}