#include "iostream"
#include "vector"
using namespace std;

int solve(vector<int>& days, vector<int>& costs,int noOfDays,int index) {
    if(index >= noOfDays){
        return 0;
    }
    int oneDayPass = costs[0] + solve(days,costs,noOfDays,index + 1);

    int i=0;
    for (i = index; (i < noOfDays) && (days[i] < days[index] +7 ); ++i);
    int sevenDayPass = costs[1] + solve(days,costs,noOfDays,i);

    for (i = index; (i < noOfDays) && (days[i] < days[index] +30 ); ++i);
    int thirtyDayPass = costs[2] + solve(days,costs,noOfDays,i);

    return min(oneDayPass,min(sevenDayPass,thirtyDayPass));


}
int mincostTickets(vector<int>& days, vector<int>& costs) {
    return solve(days,costs,days.size(),0);
}

int main(){
    vector<int> days = {1, 4, 6, 7, 8, 20};
    vector<int> costs = {2, 7, 15};

    cout<<mincostTickets(days,costs);
}