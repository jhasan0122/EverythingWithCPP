#include "iostream"
#include "math.h"

using namespace std;

int main(){
    int n;
    cin>>n;
    int last = n%10;
    int zero = log10(n);
    int rest = pow(10,zero);
    int first = n / rest;
    n -= last;
    n +=first;

    int newNum = rest*last + (n%rest);
    cout<<newNum;
}