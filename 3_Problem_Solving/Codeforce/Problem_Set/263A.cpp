#include "iostream"

using namespace std;

int solve(int matrix[5][5]){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if(matrix[i][j]){
                return abs(i-2) + abs(j-2);
            }
        }
    }
    return 0;
}

int main(){
    int matrix[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin>>matrix[i][j];
        }
    }
    cout<<solve(matrix);
}