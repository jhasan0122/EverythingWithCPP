#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int>& nums,int start,int end){
    vector<int> dp(end+2,0);
    dp[start + 0] = nums[start + 0];
    dp[start + 1] = max(nums[start + 0],nums[start + 1]);

    for (int i = start+2; i <= end; ++i) {
        int include = nums[i] + dp[i-2];
        int exclude = 0 + dp[i-1];
        dp[i] = max(include,exclude);
    }
    return dp[end];
}

int rob(vector<int>& nums) {
    int n=nums.size();

    if(n == 1){
        return nums[0];
    }
    if(n==2){
        return max(nums[0],nums[1]);
    }


    int firstToSecLast = solve(nums,0,n-1);
    int secToLast = solve(nums,1,n-2);
    return max(firstToSecLast,secToLast);
}

int main(){
    vector<int> nums = {2, 7, 9, 3, 1};
    cout<<rob(nums);
}