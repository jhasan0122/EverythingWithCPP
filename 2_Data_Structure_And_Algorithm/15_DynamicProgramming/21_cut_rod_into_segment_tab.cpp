#include "iostream"
#include "vector"
using namespace std;

int cutSegments(int n, int x, int y, int z) {
    vector<int> dp(n+1,INT_MIN);

    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int cutRodByX=INT_MIN;
        if(i-x>=0){
            cutRodByX=1+ dp[i-x];
        }
        int cutRodByY =INT_MIN;
        if(i-y>=0){
            cutRodByY=1+ dp[i-y];
        }
        int cutRodByZ =INT_MIN;
        if(i-z>=0){
            cutRodByZ = 1+ dp[i-z];
        }
        dp[i] = max(cutRodByX ,max( cutRodByY , cutRodByZ));
    }

    int ans = dp[n];
    if(ans < 0){
        return 0;
    }
    return ans;
}
int main(){
    cout<<cutSegments(7,5,2,2);
}