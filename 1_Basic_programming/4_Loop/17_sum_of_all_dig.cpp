#include "iostream"

using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int temp = n;
    while (temp){
        int dig = temp%10;
        sum+=dig;
        temp/=10;
    }
    cout<<sum;
}