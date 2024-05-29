#include "iostream"

using namespace std;

string solve(string word){
    int n = word.length();
    if(n <= 10){
        return word;
    }
    string ans = word[0] + to_string(n-2) + word[n-1];
    return ans;
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        string word;
        cin>>word;
        cout<<solve(word)<<endl;
    }
}