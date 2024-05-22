#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        int temp = i,sum=0;
        while (temp){
            int dig = temp%10;
            temp/=10;

            int fact = 1;
            for (int j = 1; j <= dig; ++j) {
                fact *=j;
            }
            sum+=fact;
        }
        if(sum == i){
            cout<<i<<" ";
        }
    }


}