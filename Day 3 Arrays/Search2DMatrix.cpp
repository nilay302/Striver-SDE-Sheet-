#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=-1;
        for(int i = 0;i<matrix.size();i++){
            int n = matrix[i].size();
            if(matrix[i][n-1]>=target){
                row = i;
                break;
            }
        }
        if(row == -1)return false;
        int l = 0,h = matrix[row].size()-1;
        while(l<=h){
            int m = (l+h)/2;
            if(matrix[row][m]==target)return true;
            if(matrix[row][m]>target){
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        return false;
    }
};