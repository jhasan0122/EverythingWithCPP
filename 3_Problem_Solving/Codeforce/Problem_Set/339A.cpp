#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

string solve(string str){
    vector<int> num;
    for (int i = 0; i < str.length(); i+=2) {
        num.push_back(str[i] -'0');
    }
    sort(num.begin(), num.end());
    string ans="";
    for (auto x:num) {
        ans+=to_string(x)+"+";
    }
    int n=str.length();
    ans = ans.substr(0,n);
    return ans;
}


int main(){
    string str;
    cin>>str;
    cout<<solve(str);
}