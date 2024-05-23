#include "iostream"
#include "vector"

using namespace std;

void splitStringBySpace(string str,vector<string> &splitList){
    int j=0;
    for (int i = 0; i < str.length(); ++i) {
        if(str[i]==' '){
            string sub = str.substr(j,i-j);
            j=i+1;
            splitList.push_back(sub);
        }
    }
}


int main(){
    string str ="My name is Jeehan Hasan Adib Molla";
    vector<string> splitList;
    splitStringBySpace(str,splitList);

    for (auto x:splitList) {
        cout<<x<<endl;
    }

}