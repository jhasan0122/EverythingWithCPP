#include "iostream"
#include "vector"
using namespace std;

int solve(string statement[],int n){
    int count=0;
    for (int i = 0; i < n; ++i) {
        if(statement[i][1] == '+'){
            count++;
        }
        else{
            count--;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    string statements[n];
    for (int i = 0; i < n; ++i) {
        cin>>statements[i];
    }
    cout<<solve(statements,n);
}