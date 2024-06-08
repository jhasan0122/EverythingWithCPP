#include "iostream"

using namespace std;

string solve(string games){
    int an=0,dan=0;
    for (int i = 0; i < games.length(); ++i) {
        if(games[i] == 'A'){
            an++;
        }
        else if(games[i] == 'D'){
            dan++;
        }
    }
    if(an == dan){
        return "Friendship";
    }
    else if(an > dan){
        return "Anton";
    }
    return "Danik";
}

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    cout<<solve(str);
}