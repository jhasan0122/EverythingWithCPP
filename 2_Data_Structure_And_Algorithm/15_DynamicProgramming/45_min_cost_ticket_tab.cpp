#include "iostream"
#include "vector"
using namespace std;

int mincostTickets(vector<int>& days, vector<int>& costs) {
    int noOfDays = days.size();
    vector<int> dp(noOfDays+1,0);



    for (int index = noOfDays-1; index >=0 ; --index) {
        int oneDayPass = costs[0] + dp[index+1];

        int i=0;
        for (i = index; (i < noOfDays) && (days[i] < days[index] +7 ); ++i,dp);
        int sevenDayPass = costs[1] + dp[i];

        for (i = index; (i < noOfDays) && (days[i] < days[index] +30 ); ++i);
        int thirtyDayPass = costs[2] + dp[i];

        dp[index] =  min(oneDayPass,min(sevenDayPass,thirtyDayPass));
    }


    return dp[0];
}

int main(){
    vector<int> days = {1, 4, 6, 7, 8, 20};
    vector<int> costs = {2, 7, 15};

    cout<<mincostTickets(days,costs);
}