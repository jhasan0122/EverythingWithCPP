#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int first =1;
    int second =1;
    cout<<first<<" "<<second<<" ";
    for (int i = 3; i <= n; ++i) {
        int third = first + second;
        first = second;
        second = third;
        cout<<third<<" ";
    }
}