#include "iostream"

using namespace std;

string solve(int w){
    if(w!=2 && w%2==0){
        return "YES";
    }
    return "NO";
}

int main(){
    int w;
    cin>>w;
    cout<<solve(w);
}