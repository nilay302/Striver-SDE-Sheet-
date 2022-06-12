#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
   long long  int cs=0,ms=0;
    for (int i = 0; i < n; ++i)
    {
        cs+=arr[i];
        if(cs<0)cs=0;
        if(ms<cs)ms=cs;
    }
        
    return ms;
}