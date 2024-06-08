#include "iostream"

using namespace std;

int solve(int n,int *arr){
    int mini = arr[0],secMin = arr[0],flag=0;
    for (int i = 0; i < n; ++i) {
        if(arr[i] < mini){
            flag=1;
            secMin = mini;
            mini = arr[i];
        }
        else if(arr[i] < secMin  && arr[i] > mini){
            flag=1;
            secMin = arr[i];
        }
    }
    if(secMin == arr[0] && flag==0){
        return 0;
    }
//    cout<<mini<<" "<<secMin<<endl;
    return secMin-1;
}


int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int arr[n];
        for (int j = 0; j < n; ++j) {
            cin>>arr[j];
        }
        cout<<solve(n,arr)<<endl;
    }
}
