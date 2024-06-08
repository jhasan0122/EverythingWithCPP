#include "iostream"

using namespace std;

string solve(string s,string t){
    int n=s.length()-1;
    for (int i = 0; i <= n; ++i) {
        if(s[i]!=t[n-i]){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    string s,t;
    cin>>s>>t;
    cout<<solve(s,t);
}