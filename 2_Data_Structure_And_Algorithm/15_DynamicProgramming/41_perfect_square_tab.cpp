#include "iostream"
#include "vector"
using namespace std;


int numSquares(int n) {
    vector<int> dp(n+1,0);

    for (int num = 1; num <= n; ++num) {
        int minCounter = num;
        for (int i = 1; i*i <= num; ++i) {
            minCounter = min(minCounter,1 +dp[num - i*i]);
        }
        dp[num] = minCounter;
    }
    return dp[n];
}

int main(){
    cout<<numSquares(12);
}