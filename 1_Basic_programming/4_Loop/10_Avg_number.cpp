#include "iostream"

using namespace std;

int main(){
    int n;
    float sum=0;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        float x;
        cin>>x;
        sum += x;
    }
    cout<<(float )sum/n;
}