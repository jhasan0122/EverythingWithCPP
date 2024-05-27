#include "iostream"

using namespace std;

int solve(int n, int x, int y, int z){
    if(n < 0){
        return INT_MIN;
    }
    if(n == 0){
        return 0;
    }
    int cutRodByX =1+ solve(n-x,x,y,z);
    int cutRodByY =1+ solve(n-y,x,y,z);
    int cutRodByZ =1+ solve(n-z,x,y,z);
    return max(cutRodByX ,max( cutRodByY , cutRodByZ));
}

int cutSegments(int n, int x, int y, int z) {
    int ans = cutSegments(n,x,y,z);
    if(ans == INT_MIN){
        return 0;
    }
    return ans;
}
int main(){
    cout<<cutSegments(7,5,2,2);
}