#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>&a,int s,int e){
    int i = s;
    int m = (s+e)/2;
    int j = m+1;
    int inv = 0;
    vector<int>ans;
    while(i<=m && j<=e){
        if(a[i]>a[j]){
            ans.push_back(a[j]);
            inv += (m-i+1); //counting inversion
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
        }
    }
    if(i>m){
        for(int i = j;j<=e;j++){
            ans.push_back(a[i]);
        }
    }
    if(j>e){
        for(int j = i;j<=e;j++){
            ans.push_back(a[j]);
        }
    }
    int k = 0;
    for(int i = s;i<=e;i++){
        a[i]=ans[k];
        k++;
    }
    return inv;
}


int inversionCount(vector<int>&a,int s,int e){
    //base case
    if(s>=e){
        return 0;
    }
    //recursive case
    int mid = (s+e)/2;
    int c1 = inversionCount(a,s,mid);
    int c2 = inversionCount(a,mid+1,e);
    int ci =  merge(a,s,e); 
    return c1 + c2 + ci;
}

int main(){
    vector<int>a ={2,5,1,3,4};
    int start = 0;
    int end = a.size()-1;
    int ans = inversionCount(a,start,end);
    cout<<ans<<endl;
    return 0;
}