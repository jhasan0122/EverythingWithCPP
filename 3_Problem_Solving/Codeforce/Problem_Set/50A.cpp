#include "iostream"

using namespace std;

int solve(int m,int n){
    return (m*n)/2;
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<solve(m,n);
}