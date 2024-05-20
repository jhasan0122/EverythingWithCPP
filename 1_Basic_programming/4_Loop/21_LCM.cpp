#include "iostream"

using namespace std;

int main(){
    int x,y,lcm =x*y;
    cin>>x>>y;

    for (int i = 1; i <= x*y; ++i) {
        if(i%x==0 && i%y==0){
            lcm = i;
            break;
        }

    }
    cout<<lcm;
}