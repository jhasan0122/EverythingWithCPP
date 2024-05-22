#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int pos;
    while (pos!=-1){
        cout<<"Enter -1 to stop update"<<endl;
        cout<<"Pos:";
        cin>>pos;
        if(pos>=n){
            break;
        }
        cout<<"Data:";
        cin>>arr[pos];
        for (int i = 0; i < n; ++i) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}