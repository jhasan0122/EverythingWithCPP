#include "iostream"
#include "math.h"

using namespace std;

int main(){
    int n;
    cin>>n;

    int numOfDig = log10(n) + 1;
    cout<<numOfDig;
}