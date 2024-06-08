#include "iostream"

using namespace std;

string solve(string word){
    int small=0,cap = 0;
    string smallStr = "",capStr="";
    for (int i = 0; i < word.length(); ++i) {
        if(word[i]>='a' && word[i]<='z'){
            small++;
        }
        else{
            cap++;
        }
        smallStr+=tolower(word[i]);
        capStr+=towupper(word[i]);
    }
    if(cap > small){
        return capStr;
    }
    return smallStr;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str);
}