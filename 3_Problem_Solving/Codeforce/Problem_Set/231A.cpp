#include "iostream"

using namespace std;

int solve(int n,int mat[][3]){
    int count=0;
    for (int i = 0; i < n; ++i) {
        int sum=0;
        for (int j = 0; j < 3; ++j) {
            sum += mat[i][j];
        }
        if(sum>=2){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int mat[n][3];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>mat[i][j];
        }
    }
    cout<<solve(n,mat);
}