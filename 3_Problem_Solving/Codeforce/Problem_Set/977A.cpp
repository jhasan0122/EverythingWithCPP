#include "iostream"

using namespace std;

int solve(int n,int k){
    while (1){
        int dig = n%10;
        if(dig >= k){
            return n - k;
        }
        else{
            n/=10;
            k-=dig;
            k--;
        }
        if(k<=0){
            return n;
        }
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k);
}