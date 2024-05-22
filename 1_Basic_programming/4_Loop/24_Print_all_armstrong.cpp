#include "iostream"
#include "math.h"

using namespace std;


int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        int dig = log10(i) + 1;

        int temp = i,sum=0;

        while (temp){
            int digit = temp%10;
            sum+= pow(digit,dig);

            temp/=10;
        }
        if(sum == i){
            cout<<i<<" ";
        }
    }
}