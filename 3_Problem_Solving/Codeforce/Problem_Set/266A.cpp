#include "iostream"

using namespace std;

int solve(string colors){
    int count = 0;
    for (int i = 0; i < colors.length()-1; ++i) {
        if(colors[i] == colors[i+1]){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    string colors;
    cin>>colors;
    cout<<solve(colors);
}