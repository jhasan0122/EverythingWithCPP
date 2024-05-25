#include "iostream"
#include "vector"

using namespace std;

int solve(int n,vector<int> &dp){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return dp[n] = solve(n-1,dp) + solve(n-2,dp);
}

int fibonacciNumberMem(int n){
    vector<int> dp(n+1,-1);
    return solve(n,dp);
}

int main(){
    cout<<fibonacciNumberMem(6);
}