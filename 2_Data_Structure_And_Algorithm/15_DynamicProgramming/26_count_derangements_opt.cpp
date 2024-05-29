#include "iostream"
#include "limits.h"
#include "vector"
#define MOD 1000000007
using namespace std;


long long int countDerangements(int n) {


    int secondPrev = 0;
    int firstPrev = 1;

    for (int i = 3; i <= n; ++i) {
        int curr = ((n-1)*(firstPrev + secondPrev))%MOD;
        secondPrev = firstPrev;
        firstPrev = curr;
    }

    return firstPrev;
}


int main(){
    cout<<countDerangements(3);
}