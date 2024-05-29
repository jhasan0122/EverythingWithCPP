#include "iostream"
#include "vector"

using namespace std;
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    vector<vector<int>> dp(n+1,vector<int>(maxWeight+1,0));

    for (int cap = weight[0]; cap <= maxWeight; ++cap) {
        if(weight[0] <= maxWeight){
            dp[0][cap] = value[0];
        }
    }

    for (int index = 1; index <= n; ++index){
        for (int cap = 0; cap <= maxWeight ; ++cap) {
            int include = 0;
            if(weight[index] <= cap){
                include = value[index] +dp[index-1][cap - weight[index]];
            }

            int exclude = 0 + dp[index-1][cap];
            dp[index][cap]  = max(include,exclude);
        }
    }
    return dp[n-1][maxWeight];
}

int main(){
    vector<int> weight = {1, 2, 4, 5};
    vector<int> value = {5, 4, 8, 6};
    cout<<knapsack(weight,value,4,5);

}