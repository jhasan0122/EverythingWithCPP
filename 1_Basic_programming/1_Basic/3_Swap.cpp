
#include "iostream"

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int temp = x;
    x= y;
    y= temp;
    cout<<x<<" "<<y;

}
