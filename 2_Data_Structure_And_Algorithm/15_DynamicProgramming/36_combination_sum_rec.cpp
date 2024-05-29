#include "iostream"
#include "vector"
using namespace std;

int solve(vector<int> &num, int tar){
    if(tar < 0){
        return 0;
    }
    if(tar == 0){
        return 1;
    }
    int findNoOfWays = 0;
    for (auto n:num) {
        findNoOfWays += solve(num,tar - n);
    }
    return findNoOfWays;
}
int findWays(vector<int> &num, int tar){
    return solve(num,tar);
}

int main(){
    vector<int> nums = {1,2,5};
    cout<<findWays(nums,5);
}