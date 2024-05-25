#include "iostream"

using namespace std;


int fibonacciNumberOpt(int n){
    int secondPrev = 0;
    int firstPrev = 1;

    for (int i = 2; i <= n; ++i) {
        int curr = firstPrev + secondPrev;
        secondPrev = firstPrev;
        firstPrev = curr;
    }

    return firstPrev;
}

int main(){
    cout<<fibonacciNumberOpt(6);
}