#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int ans = 1;
    	int max_ans = 1;
    	int j = 0;
    	int i = 1;
    	while(i<n){
    	    if(arr[i]<=dep[j]){
    	        ans++;
    	        i++;
    	    }
    	    else{
    	        ans--;
    	        j++;
    	    }
    	    max_ans = max(ans,max_ans);
    	   // cout<<max_ans<<" ";
    	}
    	return max_ans;
    }