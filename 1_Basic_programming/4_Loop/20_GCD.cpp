#include "iostream"

using namespace std;

int main(){
    int x,y,gcd =1;
    cin>>x>>y;
    for (int i = 1; i <= x && i<=y; ++i) {
        if(x%i ==0 && y%i==0){
            gcd = i;
        }
    }
    cout<<gcd;
}