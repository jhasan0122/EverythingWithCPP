#include "iostream"
#include "vector"
#define MOD 1000000007

using namespace std;

int add(int a,int b){
    return (a%MOD + b%MOD)%MOD;
}
int mul(int a,int b){
    return (a%MOD * 1LL * b%MOD)%MOD;
}

int numberOfWays(int n, int k) {


    int secondPrev = k;
    int firstPrev = mul(k,k);
    for (int i = 3; i <= n; ++i) {
        int curr = add(mul(k-1, firstPrev),mul(k-1, secondPrev));
        secondPrev = firstPrev;
        firstPrev = curr;
    }

    return firstPrev;
}

int main(){
    cout<<numberOfWays(4,2);
}