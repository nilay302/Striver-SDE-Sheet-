#include <bits/stdc++.h>
using namespace std;
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
     bool compare(const Job &a,const Job  &b){
        return (a.profit > b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<int>ans;
        int jobs = 0;
        int time = 0 ;
        int profit = 0;
        for(int i = 0;i<n;i++){
            time = max(time,arr[i].dead);
        }
        vector<int>timeline(time+1,0);
        sort(arr,arr+n,compare);
        for(int i = 0;i<n;i++){
            if(timeline[arr[i].dead]==0){
                jobs++;
                timeline[arr[i].dead]=1;
                profit+=arr[i].profit;
            }
            else{
                int j = arr[i].dead;
                while(j>=1 && timeline[j]!=0){
                    j--;
                }
                if(j!=0){
                    timeline[j]=1;
                    profit+=arr[i].profit;
                    jobs++;
                }
            }
        }
        ans.push_back(jobs);
        ans.push_back(profit);
        return ans;
    } 