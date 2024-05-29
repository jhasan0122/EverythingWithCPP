#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int>& values,int i,int j) {
    if(i+1 == j){
        return 0;
    }
    int mini = INT_MAX;
    for (int k = i+1; k <= j-1; ++k) {
        mini = min(mini, values[i]*values[j]*values[k] + solve(values,i,k) + solve(values,k,j));
    }
    return mini;
}

int minScoreTriangulation(vector<int>& values) {
    return solve(values,0,values.size()-1);
}

int main(){
    vector<int> values = {1, 3, 1, 4, 1, 5};
    cout<<minScoreTriangulation(values);
}