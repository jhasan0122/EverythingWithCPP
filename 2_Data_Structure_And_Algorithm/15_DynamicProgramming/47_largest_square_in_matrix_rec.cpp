#include "iostream"
#include "vector"

using namespace std;

int solve(vector<vector<char>>& matrix,int i,int j,int &maxi) {
    if(i>=matrix.size() || j>=matrix[0].size()){
        return 0;
    }
    int rightSize = solve(matrix,i,j+1,maxi);
    int downSize = solve(matrix,i+1,j,maxi);
    int diagonalSize = solve(matrix,i+1,j+1,maxi);


    if(matrix[i][j] == '1'){
        int ans = 1 + min(rightSize,min(downSize,diagonalSize));
        maxi = max(maxi , ans);
        return ans;
    }
    return 0;
}

int maximalSquare(vector<vector<char>>& matrix) {
    int maxi = INT_MIN;
    solve(matrix,0,0,maxi);
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