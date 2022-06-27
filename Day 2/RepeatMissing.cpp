#include <bits/stdc++.h> 
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here vector<int> Solution::repeatedNumber(const vector<int> &A) {
//     int n =arr.size();
    pair <int,int>ans;
    vector<int>set1;
    vector<int>set2;
    int x = 0;
    for(int i=0;i<n;i++){
        x^=arr[i];
    }
    for(int i = 1;i<=n;i++){
        x^=i;
    }
    int set=0;
    while(((x)&(1))!=1){
        x=x>>1;
        set++;
    }
    for(int i = 0;i<n;i++){
        int b = arr[i]>>set;
        if((b&1)==1){
            set1.push_back(arr[i]);
        }
        else{
            set2.push_back(arr[i]);
        }
    }
    for(int i = 1;i<=n;i++){
        int b = i>>set;
        if((b&1)==1){
            set1.push_back(i);
        }
        else{
            set2.push_back(i);
        }
    }
    int ans1=0,ans2=0;
    for(int i = 0;i<set1.size();i++){
        ans1^=set1[i];
    }
    for(int i = 0;i<set2.size();i++){
        ans2^=set2[i];
    }
    for(int i =0;i<n;i++){
        if(arr[i]==ans1){
           
            ans.first=ans2;
            ans.second=ans1;
//             ans.make_pair(ans1,ans2);
            return ans;
        }
        if(arr[i]==ans2){
             ans.first=ans1;
            ans.second=ans2;
            return ans;
        }
    }


	
}
