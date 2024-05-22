#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    while (n){
        int dig= n%10;
        n/=10;

        sum = (sum*10) + dig;

    }
    cout<<sum;
}