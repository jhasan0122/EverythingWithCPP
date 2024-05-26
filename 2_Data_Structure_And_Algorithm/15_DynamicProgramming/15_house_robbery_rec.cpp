#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int>& nums,int start,int end){
    if(start >= end){
        return 0;
    }
    int include = nums[start] + solve(nums,start+2,end);
    int exclude = 0 + solve(nums,start+1,end);
    return max(include,exclude);
}

int rob(vector<int>& nums) {
    int n=nums.size();
    int firstToSecLast = solve(nums,0,n);
    int secToLast = solve(nums,1,n-1);
    return max(firstToSecLast,secToLast);
}

int main(){
    vector<int> nums = {2, 7, 9, 3, 1};
    cout<<rob(nums);
}