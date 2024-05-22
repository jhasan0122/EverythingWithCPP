#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    int copy[n];
    for (int i = 0; i < n; ++i) {
        copy[i] = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cout<<copy[i];
    }
}