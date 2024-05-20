#include "iostream"

using namespace std;

int main(){
    int num;
    cin>>num;

    int first = 0;
    int last = num%10;
    num/=10;
    while (num){
        int dig = num%10;
        num /= 10;
        if(num==0){
            first = dig;
        }
    }
    cout<<first <<" "<<last;

}