#include "iostream"
#include "math.h"

using namespace std;

int main(){
    int num;
    cin>>num;

    int first = 0;
    int last = num%10;

    int zeroCount = log10(num);
    first = num / pow(10,zeroCount);

    cout<<first <<" "<<last;

}
