#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n,sum=0;
    while (temp){
        int dig = temp%10;
        temp/=10;

        int fact = 1;
        for (int i = 1; i <= dig; ++i) {
            fact *=i;
        }
        sum+=fact;
    }
    if(sum == n){
        cout<<"Its a strong number";
    }
    else{
        cout<<"Not a strong number";
    }
}