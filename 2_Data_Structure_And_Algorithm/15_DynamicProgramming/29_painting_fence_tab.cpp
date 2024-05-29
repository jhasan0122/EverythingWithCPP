#include "iostream"
#include "vector"
#define MOD 1000000007

using namespace std;

int add(int a,int b){
    return (a%MOD + b%MOD)%MOD;
}
int mul(int a,int b){
    return (a%MOD * 1LL * b%MOD)%MOD;
}

int numberOfWays(int n, int k) {
    vector<int> dp(n+1,0);

    dp[1] = k;
    dp[2] = mul(k,k);
    for (int i = 3; i <= n; ++i) {
        dp[i] = add(mul(k-1, dp[i-1]),mul(k-1, dp[i-2]));
    }

    return dp[n];
}

int main(){
    cout<<numberOfWays(4,2);
}