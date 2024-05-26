#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int>& coins, int amount){
    if(amount < 0){
        return INT_MAX;
    }
    if(amount == 0){
        return 0;
    }
    int minNoCoin = INT_MAX;
    for (auto co:coins) {
        int ans = solve(coins,amount - co);

        if(ans != INT_MAX){
            minNoCoin = min(minNoCoin, 1 + ans);
        }
    }
    return minNoCoin;
}

int coinChange(vector<int>& coins, int amount) {
    int ans =  solve(coins,amount);
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