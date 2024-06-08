#include "iostream"
#include "cmath"
using namespace std;

long long  solve(long long n,long long m,long long a){
    if(n%a==0 && m%a==0){
        return (n*m)/(a*a);
    }
    long long x =m/a;
    long long y =n/a;
    if(m%a == 0){
        return (x*y) + x;
    }
    else if(n%a == 0){
        return (x*y) + y;
    }
    return (x*y) + x + y +1;
}

int main(){
    long long n, m, a;
    cin>>n>>m>>a;
    cout<<solve(n,m,a);
}