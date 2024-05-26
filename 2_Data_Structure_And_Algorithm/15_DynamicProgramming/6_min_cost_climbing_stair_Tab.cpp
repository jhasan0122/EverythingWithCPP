#include "iostream"
#include "vector"

using namespace std;


int minCostClimbingStairTab(vector<int> &cost){
    int totalStair = cost.size();
    vector<int> dp(totalStair+1 , 0);

    dp[0] = cost[0];
    dp[1] = cost[1];

    for (int stairNo = 2; stairNo <totalStair ; ++stairNo) {
        int oneStepCost = cost[stairNo] + dp[stairNo-1];
        int twoStepCost = cost[stairNo] + dp[stairNo-2];
        dp[stairNo] = min(oneStepCost,twoStepCost);
    }

    return min(dp[totalStair-1],dp[totalStair-2]);
}

int main(){
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout<<minCostClimbingStairTab(cost);
}