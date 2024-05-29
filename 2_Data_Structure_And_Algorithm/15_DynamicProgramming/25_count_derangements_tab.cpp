#include "iostream"
#include "limits.h"
#include "vector"
#define MOD 1000000007
using namespace std;


long long int countDerangements(int n) {
    vector<long long int> dp(n+1,-1);

    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; ++i) {
        dp[i] = ((n-1)*(dp[i-1] + dp[i-2]))%MOD;
    }

    return dp[n];
}


int main(){
    cout<<countDerangements(3);
}