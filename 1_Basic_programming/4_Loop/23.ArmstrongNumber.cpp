#include "iostream"
#include "math.h"

using namespace std;

int main(){
    int n;
    cin>>n;
    int digNumber = log10(n) +1;

    int temp = n,sum=0;

    while (temp){
        int dig = temp%10;
        temp/=10;

        sum += pow(dig,digNumber);
    }
    if(sum==n){
        cout<<"Its an armstrong number";
    }
    else{
        cout<<"Its not an armstrong number";
    }
}