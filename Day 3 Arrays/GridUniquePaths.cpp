//method 1:-
//Recursive Method

// #include<bits/stdc++.h>
// using namespace std;
// int uniquePaths(int i,int j,int m,int n){
//     if(i>=m || j>=n)return 0;
//     if(i==m-1 && j == n-1)return 1;
//     int ans1 = uniquePaths(i+1,j,m,n);
//     int ans2 = uniquePaths(i,j+1,m,n);
//     return ans1+ans2;
// }
// int main(){
//     int m = 3,n = 7;
//     int i = 0,j = 0;
//     int ans = uniquePaths(i,j,m,n);
//     cout<<ans<<endl;
// }


//Method 2:-
//dp

#include<bits/stdc++.h>
using namespace std;
int uniquePaths(int i,int j,int m,int n,vector<vector<int>>&dp){
    if(i>=m || j>=n)return 0;
    if(i==m-1 && j == n-1)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    else return dp[i][j] = uniquePaths(i+1,j,m,n,dp)+uniquePaths(i,j+1,m,n,dp) ;
}
int main(){
    int m = 3,n = 2;
    int i = 0,j = 0;
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    int ans = uniquePaths(i,j,m,n,dp);
    cout<<ans<<endl;
}

//Method 3:-
//using combinatrics:-


class Solution {
public:
    
    int uniquePaths(int m, int n) {
         int c = m+n-2;
        int r = m-1;
        double ans = 1;
        for(int i = 1;i<=r;i++){
            ans = ans *(c-r+i)/i;
        }
        return (int)ans;
    }
};