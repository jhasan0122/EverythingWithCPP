#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    int pos=0,neg=0,zero=0;
    for (int i = 0; i < n; ++i) {
        if(arr[i]<0){
            neg++;
        }
        else if(arr[i]==0){
            zero++;
        }
        else{
            pos++;
        }
    }
    cout<<pos<<" "<<neg<<" "<<zero;
}