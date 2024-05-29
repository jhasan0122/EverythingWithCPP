#include "iostream"
#include "vector"

using namespace std;

int solve(vector<vector<char>>& matrix,int i,int j,int &maxi,vector<vector<int>> &dp) {
    if(i>=matrix.size() || j>=matrix[0].size()){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int rightSize = solve(matrix,i,j+1,maxi,dp);
    int downSize = solve(matrix,i+1,j,maxi,dp);
    int diagonalSize = solve(matrix,i+1,j+1,maxi,dp);


    if(matrix[i][j] == '1'){
        int ans = 1 + min(rightSize,min(downSize,diagonalSize));
        maxi = max(maxi , ans);
        return dp[i][j] = ans;
    }
    return 0;
}

int maximalSquare(vector<vector<char>>& matrix) {
    int maxi = INT_MIN;
    vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),-1));
    solve(matrix,0,0,maxi,dp);
    if(maxi == INT_MIN){
        return 0;
    }
    return maxi*maxi;
}

int main(){
    vector<vector<char>> matrix = {{'1', '0', '1', '0', '0'},
                                   {'1', '0', '1', '1', '1'},
                                   {'1', '1', '1', '1', '1'},
                                   {'1', '0', '0', '1', '0'}};
//    matrix = {{'0'}};
    cout<<maximalSquare(matrix);
}