#include "iostream"

using namespace std;

int solve(int x){
    int count = 0;
    count += x/5;
    x= x%5;
    count += x/4;
    x= x%4;
    count += x/3;
    x= x%3;
    count += x/2;
    x= x%2;
    count += x;
    return count;
}

int main(){
    int x;
    cin>>x;
    cout<<solve(x);
}