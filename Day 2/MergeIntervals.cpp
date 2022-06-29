#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<int>start;
        vector<int>end;
        int flag = 0;
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        if(intervals.size()==1 || intervals.size()==0)return intervals;
        for(int i = 0;i<intervals.size();i++){
                start.push_back(intervals[i][0]);
                end.push_back(intervals[i][1]);
        }
        int starting = start[0];
        int ending = end[0];
      for(int i = 1;i<start.size();i++){
           if(start[i]>ending){
                vector<int>t;
                t.push_back(starting);
                t.push_back(ending);
                ans.push_back(t);
                starting = start[i];
                ending = end[i];
            }
            ending = max(end[i],ending);
        }
        vector<int>t;
                t.push_back(starting);
                t.push_back(ending);
                ans.push_back(t);
        return ans;
}
