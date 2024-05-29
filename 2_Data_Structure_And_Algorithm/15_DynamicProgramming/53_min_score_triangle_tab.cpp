#include "iostream"
#include "vector"

using namespace std;


int minScoreTriangulation(vector<int>& values) {
    int n=values.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for (int i = n-1; i >=0 ; --i) {
        for (int j = i+2; j < n; ++j) {
            int mini = INT_MAX;
            for (int k = i+1; k <= j-1; ++k) {
                mini = min(mini, values[i]*values[j]*values[k] + dp[i][k] + dp[k][j]);
            }
            dp[i][j] = mini;
        }
    }
    return dp[0][n-1];
}

int main(){
    vector<int> values = {1, 3, 1, 4, 1, 5};
    cout<<minScoreTriangulation(values);
}