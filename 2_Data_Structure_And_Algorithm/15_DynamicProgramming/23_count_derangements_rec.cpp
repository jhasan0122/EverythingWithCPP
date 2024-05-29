#include "iostream"
#include "limits.h"
using namespace std;


long long int solve(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return (n-1)*(solve(n-1) + solve(n-2));
}


long long int countDerangements(int n) {
    return solve(n);
}


int main(){
    cout<<countDerangements(3);
}