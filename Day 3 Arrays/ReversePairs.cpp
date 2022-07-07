#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    
    long long int merge(vector<int>&a,int s,int e){
    int i = s;
    int m = (s+e)/2;
    int j = m+1;
    long long int rev = 0;
    while(i<=m && j<=e){
        if(a[i]>(long long )2*(long  long)a[j]){
            rev+=(m-i+1);
            j++;
        }
        else{
            i++;
        }
    }
    i = s;
    j =m+1; 
    vector<int>ans;
    while(i<=m && j<=e){
        if(a[i]>a[j]){
            ans.push_back(a[j]);
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
        }
    }
     while(i<=m)ans.push_back(a[i++]);
    while(j<=e)ans.push_back(a[j++]);
    int k = 0;
    for(int i = s;i<=e;i++){
        a[i]=ans[k];
        k++;
    }
    return rev;
}
    
   long long  int reverseCount(vector<int>&a,int s,int e){
    //base case
    if(s>=e){
        return 0;
    }
    //recursive case
    int mid = (s+e)/2;
    long long int c1 = reverseCount(a,s,mid);
    long long int c2 = reverseCount(a,mid+1,e);
    long long int ci =  merge(a,s,e); 
    return c1 + c2 + ci;
}
    int reversePairs(vector<int>& nums) {
     int start = 0;
     int end = nums.size()-1;
     long long int ans = reverseCount(nums,start,end);
        return ans;
    }
};