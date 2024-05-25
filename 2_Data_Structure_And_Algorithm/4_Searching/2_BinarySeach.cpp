#include "iostream"

using namespace std;

int binarySearch(int *arr,int n,int key){

    int start = 0,end = n-1;
    while (start <= end){
        int mid= (start+end) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int n=6;
    int arr[6] = {45 ,96 ,86 ,78 ,6,89};
    int ans= binarySearch(arr,n,96);
    if(ans == -1){
        cout<<"Not found";
    }
    else{
        cout<<ans;
    }
}