#include "iostream"
#include "vector"

using namespace std;



int solve(vector<int> &nums,int index){
    if(index >= nums.size()){
        return 0;
    }
    int include = nums[index] + solve(nums,index + 2);
    int exlucde = solve(nums,index+1);
    return max(include,exlucde);
}

int maxSumNonAdjElement(vector<int> &nums){
    return solve(nums,0);
}

int main(){
    vector<int> nums ={2, 1, 4, 9};
    cout<<maxSumNonAdjElement(nums);
}