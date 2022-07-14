
#include<bits/stdc++.h>
using namespace std;
int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int>ans;
    int count = 0;
    int xr = 0;
    for(int i = 0;i<A.size();i++){
        xr^=A[i];
       
        if(ans[(xr)^(B)]!=NULL){
            count+=ans[(xr)^(B)];
        }
         if(xr==B){
            count++;
        }
        if(ans[xr]!=NULL){
            ans[xr]++;
        }
        else{
            ans[xr]=1;
        }
       
    }
    return count;
}

