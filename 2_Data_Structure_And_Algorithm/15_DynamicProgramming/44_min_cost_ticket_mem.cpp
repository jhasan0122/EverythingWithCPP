#include "iostream"
#include "vector"
using namespace std;

int solve(vector<int>& days, vector<int>& costs,int noOfDays,int index,vector<int> &dp) {
    if(index >= noOfDays){
        return 0;
    }

    if(dp[index] != -1){
        return dp[index];
    }

    int oneDayPass = costs[0] + solve(days,costs,noOfDays,index + 1,dp);

    int i=0;
    for (i = index; (i < noOfDays) && (days[i] < days[index] +7 ); ++i,dp);
    int sevenDayPass = costs[1] + solve(days,costs,noOfDays,i,dp);

    for (i = index; (i < noOfDays) && (days[i] < days[index] +30 ); ++i);
    int thirtyDayPass = costs[2] + solve(days,costs,noOfDays,i,dp);

    return dp[index] =  min(oneDayPass,min(sevenDayPass,thirtyDayPass));


}
int mincostTickets(vector<int>& days, vector<int>& costs) {
    int noOfDays = days.size();
    vector<int> dp(noOfDays+1,-1);
    return solve(days,costs,days.size(),0,dp);
}

int main(){
    vector<int> days = {1, 4, 6, 7, 8, 20};
    vector<int> costs = {2, 7, 15};

    cout<<mincostTickets(days,costs);
}