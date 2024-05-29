#include "iostream"

using namespace std;

string solve(string str){
    str[0] = toupper(str[0]);
    return str;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str);
}