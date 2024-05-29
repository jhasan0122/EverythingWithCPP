#include "iostream"

using namespace std;

int solve(int k,int n,int w){
    int money = (k*w*(w+1))/2;
    if(n >= money){
        return 0;
    }
    return money - n;
}

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    cout<<solve(k,n,w);
}