#include "iostream"
#include "vector"

using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1,0);

    for (int amt = 1; amt <= amount; ++amt) {
        int minNoCoin = INT_MAX;
        for (auto co:coins) {
            int ans=INT_MAX;
            if(amt - co >=0){
                ans = dp[amt - co];
            }
            if(ans != INT_MAX){
                minNoCoin = min(minNoCoin, 1 + ans);
            }
        }
         dp[amt] = minNoCoin;
    }

    int ans =  dp[amount];
    if(ans == INT_MAX){
        return -1;
    }
    return ans;
}
int main(){
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    cout<<coinChange(coins,amount);
}