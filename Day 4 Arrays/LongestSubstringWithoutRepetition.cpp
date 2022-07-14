#include <bits/stdc++.h> 
using namespace std;
int uniqueSubstrings(string input)
{
    //Write your code here
    unordered_map <char,int> ans;
        int max_count = 0;
        int count = 0;
        for(int i = 0;i<input.size();i++){
            if(ans.find(input[i])!=ans.end()){
                count = 1;
                i = ans[input[i]]+1;
                ans.clear();
                ans[input[i]] = i;
            }
            else{
                count++;
                ans[input[i]]=i;
            }
            max_count = max(max_count,count);
        }
        return max_count;
}