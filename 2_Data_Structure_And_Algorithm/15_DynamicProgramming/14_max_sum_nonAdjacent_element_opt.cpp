#include "iostream"
#include "vector"

using namespace std;

int maxSumNonAdjElement(vector<int> &nums){
    int n=nums.size();
    int secondPrev = nums[0];
    int firstPrev = max(nums[0],nums[1]);

    for (int index = 2; index <= n ; ++index) {
        int include = nums[index] + secondPrev;
        int exclude = firstPrev;
        int curr =  max(include,exclude);
        secondPrev = firstPrev;
        firstPrev = curr;
    }
    return secondPrev;
}

int main(){
    vector<int> nums ={2, 1, 4, 9};
    cout<<maxSumNonAdjElement(nums);
}