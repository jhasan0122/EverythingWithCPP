#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    while (temp){
        int dig = temp%10;
        cout<<dig<<" ";
        temp/=10;
    }
}