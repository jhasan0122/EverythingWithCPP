#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int> weight, vector<int> value, int maxWeight,int index)
{
    if(index == 0){
        if(weight[0] <= maxWeight){
            return value[0];
        }
        else{
            return 0;
        }
    }
    int include = 0;
    if(weight[index] <= maxWeight){
        include = value[index] + solve(weight,value,maxWeight-weight[index],index-1);
    }

    int exclude = 0 + solve(weight,value,maxWeight,index-1);
    return max(include,exclude);

}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    return solve(weight,value,maxWeight,n-1);
}

int main(){
    vector<int> weight = {1, 2, 4, 5};
    vector<int> value = {5, 4, 8, 6};
    cout<<knapsack(weight,value,4,5);

}