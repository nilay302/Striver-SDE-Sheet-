#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
     int min = INT_MAX;
        int profit =0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min)min = prices[i];
            int cp = prices[i]-min;
            if(cp>profit)profit = cp;
        }
       return profit;
}