#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2*i +1; ++j) {
            if(j<=i){
                cout<<1 + 2*j;
            }
            else{
                cout<<1+(2*i) - (2*(j-i));
            }
        }
        cout<<endl;
    }
}
