#include "iostream"

using namespace std;

int solve(int n){
    if(n==0){
        return 0;
    }
    int minCounter = n;
    for (int i = 1; i*i*i <= n; ++i) {
        minCounter = min(minCounter,1 +solve(n-i*i*i));
    }
    return minCounter;
}

int numCube(int n) {
    return solve(n);
}

int main(){
    cout<<numCube(12);
}