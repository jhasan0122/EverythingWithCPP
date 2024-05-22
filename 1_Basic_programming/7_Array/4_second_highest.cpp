#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    int maxi=INT_MIN,secondMax;
    for (int i = 0; i < n; ++i) {
        if(arr[i]>maxi){
            secondMax = maxi;
            maxi = arr[i];
        }
        else if(arr[i]<maxi && arr[i]>secondMax){
            secondMax = arr[i];
        }
    }
    cout<<maxi<<" "<<secondMax;
}