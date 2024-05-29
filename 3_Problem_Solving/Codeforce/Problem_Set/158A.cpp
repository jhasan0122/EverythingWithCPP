#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int solve(vector<int> a,int k){
    sort(a.begin(), a.end(),greater<int>());
    int cutScore = a[k-1];
    int count = 0;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i]!=0 && a[i] >= cutScore){
            count++;
        }
        else{
            return count;
        }
    }
    return count;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<solve(a,k);
}