#include "iostream"

using namespace std;


int solve(string str1,string str2){
    for (int i = 0; i < str1.length(); ++i) {
        if(tolower(str1[i]) < tolower(str2[i])){
            return -1;
        }
        else if(tolower(str1[i]) > tolower(str2[i])){
            return 1;
        }
    }
    return 0;
}

int main(){
    string st1,st2;
    cin>>st1>>st2;
    cout<<solve(st1,st2);
}