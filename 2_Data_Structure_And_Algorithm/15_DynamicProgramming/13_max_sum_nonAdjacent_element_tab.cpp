#include "iostream"
#include "vector"

using namespace std;

int maxSumNonAdjElement(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n+1,0);
    dp[0] = nums[0];
    dp[1] = max(nums[0],nums[1]);

    for (int index = 2; index <= n ; ++index) {
        int include = nums[index] + dp[index-2];
        int exclude = dp[index-1];
        dp[index] =  max(include,exclude);
    }
    return dp[n-1];
}

int main(){
    vector<int> nums ={2, 1, 4, 9};
    cout<<maxSumNonAdjElement(nums);
}