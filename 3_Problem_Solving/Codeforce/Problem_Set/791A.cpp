#include "iostream"

using namespace std;

int solve(int limak,int bob){
    int count = 0;
    while (limak <= bob){
        count++;
        limak*=3;
        bob*=2;
    }
    return count;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<solve(a,b);
}