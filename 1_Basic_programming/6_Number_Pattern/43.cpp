#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2*i +1; ++j) {
            if(j<=i){
                cout<<1 + j;
            }
            else{
                cout<<1+(i) - (j-i);
            }
        }
        cout<<endl;
    }
}