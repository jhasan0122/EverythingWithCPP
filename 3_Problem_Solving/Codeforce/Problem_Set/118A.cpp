#include "iostream"

using namespace std;

bool isVowel(char c){
    c = tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    return false;
}

string solve(string str){
    string ans="";
    for (int i = 0; i < str.length(); ++i) {
        if(isVowel(str[i]));
        else{
            ans+='.';
            ans+= tolower(str[i]);
        }
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str);
}