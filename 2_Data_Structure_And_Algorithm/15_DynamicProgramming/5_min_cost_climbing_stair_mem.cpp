#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int> &cost,int stairNo,vector<int> &dp){
    if(stairNo >= cost.size()){
        return 0;
    }
    if(dp[stairNo] != -1){
        return dp[stairNo];
    }
    int oneStepCost = cost[stairNo] + solve(cost,stairNo+1,dp);
    int twoStepCost = cost[stairNo] + solve(cost,stairNo+2,dp);
    return dp[stairNo] = min(oneStepCost,twoStepCost);
}

int minCostClimbingStairMem(vector<int> &cost){
    int totalStair = cost.size();
    vector<int> dp(totalStair+1 , -1);
    int startFromFirstStair = solve(cost,0,dp);
    int startFromSecondStair = solve(cost,1,dp);
    return min(startFromFirstStair,startFromSecondStair);
}

int main(){
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout<<minCostClimbingStairMem(cost);
}