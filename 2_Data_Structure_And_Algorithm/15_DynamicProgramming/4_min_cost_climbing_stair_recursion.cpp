#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int> &cost,int stairNo){
    if(stairNo >= cost.size()){
        return 0;
    }
    int oneStepCost = cost[stairNo] + solve(cost,stairNo+1);
    int twoStepCost = cost[stairNo] + solve(cost,stairNo+2);
    return min(oneStepCost,twoStepCost);
}

int minCostClimbingStair(vector<int> &cost){
    int startFromFirstStair = solve(cost,0);
    int startFromSecondStair = solve(cost,1);
    return min(startFromFirstStair,startFromSecondStair);
}

int main(){
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout<<minCostClimbingStair(cost);
}