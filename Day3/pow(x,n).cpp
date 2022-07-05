   #include<bits/stdc++.h>
using namespace std;
    double pow(double x,long long int n){
         double temp;
    if( n == 0)
        return 1;
    temp = pow(x, n / 2);
    if (n % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;

    }
    double myPow(double x, long long int n) {
        if(n>=0){
            double ans = pow(x,n);
            return ans;
        }
        else{
            double ans = pow(x,0-n);
            return (1/ans);
        }
    }