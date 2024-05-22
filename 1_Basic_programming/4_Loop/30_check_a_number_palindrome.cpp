#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0 ,temp = n;
    while (temp){
        int dig= temp%10;
        temp/=10;

        sum = (sum*10) + dig;

    }
    if(sum == n){
        cout<<"Its palindrome";
    }
    else{
        cout<<"Its not palindrome";
    }
}