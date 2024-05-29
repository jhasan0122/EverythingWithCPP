#include "iostream"
#include "vector"
using namespace std;

int findWays(vector<int> &num, int tar){
    vector<int> dp(tar +1 , 0);

    dp[0] = 1;

    for (int t = 1; t <= tar; ++t) {
        int findNoOfWays = 0;
        for (auto n:num) {
            if(t-n >= 0) {
                findNoOfWays += dp[t - n];
            }
        }
        dp[t] = findNoOfWays;
    }

    return dp[tar];
}

int main(){
    vector<int> nums = {1,2,5};
    cout<<findWays(nums,5);
}