#include "iostream"
#include "vector"

using namespace std;


int minCostClimbingStairTab(vector<int> &cost){
    int totalStair = cost.size();
    int secondPrev = cost[0];

    int firstPrev = cost[1];

    for (int stairNo = 2; stairNo <totalStair ; ++stairNo) {
        int oneStepCost = cost[stairNo] + firstPrev;
        int twoStepCost = cost[stairNo] + secondPrev;
        int curr = min(oneStepCost,twoStepCost);
        secondPrev = firstPrev;
        firstPrev = curr;
    }

    return min(firstPrev,secondPrev);
}

int main(){
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout<<minCostClimbingStairTab(cost);
}