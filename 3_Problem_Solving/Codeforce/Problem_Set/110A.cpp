#include "iostream"

using namespace std;

string solve(long long int n){

    int luckyNumber = 0;
    while (n){
        int digit = n%10;
        n/=10;
        if( digit == 4 || digit==7){
            luckyNumber++;
        }
    }
    if(luckyNumber==4 || luckyNumber==7){
        return "YES";
    }
    return "NO";
}

int main(){
    long long int n;
    cin>>n;
    cout<<solve(n);
}