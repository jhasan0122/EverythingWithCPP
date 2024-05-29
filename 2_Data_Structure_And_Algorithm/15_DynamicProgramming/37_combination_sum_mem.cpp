#include "iostream"
#include "vector"
using namespace std;

int solve(vector<int> &num, int tar,vector<int> &dp){
    if(tar < 0){
        return 0;
    }
    if(tar == 0){
        return 1;
    }
    if(dp[tar] != -1){
        return dp[tar];
    }
    int findNoOfWays = 0;
    for (auto n:num) {
        findNoOfWays += solve(num,tar - n,dp);
    }
    return dp[tar] = findNoOfWays;
}
int findWays(vector<int> &num, int tar){
    vector<int> dp(tar +1 , -1);
    return solve(num,tar,dp);
}

int main(){
    vector<int> nums = {2, 3, 6, 7};
    cout<<findWays(nums,7);
}