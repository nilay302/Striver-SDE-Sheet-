#include<bits/stdc++.h>
using namespace std;


//we go column by column and check the positioning of queen and after placing a particular queen on chess and finding the
//particular solution we place the string in ans, and by backtracking find other answers as well.

class Solution {
public:
    bool isSafe(int row,int col,vector<string>board,int n){
        int dumrow = row,dumcol = col;
        while(row>=0 && col>=0){
            if(board[row][col] == 'Q')return false;
            row--;
            col--;
        }
        row = dumrow,col=dumcol;
        while(col>=0){
            if(board[row][col]=='Q')return false;
            col--;
        }
        col = dumcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void placeQueens(vector<vector<string>>&ans,int n,int y, vector<string>&col){
        if(y==n){
            ans.push_back(col);
            return;
        }
        for(int i = 0;i<n;i++){
            if(isSafe(i,y,col,n)){
                col[i][y]='Q';
                placeQueens(ans,n,y+1,col);
                col[i][y]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>column(n);
        string s(n,'.');
        for(int i = 0;i<n;i++){
            column[i]=s;
        }
        placeQueens(ans,n,0,column);
        return ans;
    }
};