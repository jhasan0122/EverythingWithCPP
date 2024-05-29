#include "iostream"

using namespace std;

string solve(string str){
    int map[26] = {0};
    for (int i = 0; i < str.length(); ++i) {
        map[str[i] - 97] = 1;
    }
    int count = 0;
    for (int i = 0; i < 26; ++i) {
        count += map[i];
    }
    if(count%2==0){
        return "CHAT WITH HER!";
    }
    return "IGNORE HIM!";
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str);
}