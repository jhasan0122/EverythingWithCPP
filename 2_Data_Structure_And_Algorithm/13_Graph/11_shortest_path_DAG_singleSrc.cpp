#include "iostream"
#include "vector"
#include "list"
#include "unordered_map"
#include "stack"

using namespace std;

class WeiGraph{
public:
    unordered_map<int,list<pair<int,int>>> adjList;
    vector<vector<int>> edges;

    void addEdge(int from,int to,int weight,bool direction){
        adjList[from].push_back({to,weight});
        adjList[to];

        if(!direction){
            adjList[to].push_back({from,weight});
        }

        vector<int> edge;
        edge.push_back(from);
        edge.push_back(to);
        edge.push_back(weight);
        edges.push_back(edge);
    }
    void printAdjList(){
        for (auto node:adjList) {
            cout<<node.first<<"--> ";
            for (auto neighbour:node.second) {
                cout<<"["<<neighbour.first<<","<<neighbour.second<<"] ";
            }
            cout<<endl;
        }
    }
};


void dfs(unordered_map<int,list<pair<int,int>>> &adjList,unordered_map<int,bool> &visited,stack<int> &st,int source){
    visited[source] = true;
    for (auto neighbour:adjList[source]) {
        if(!visited[neighbour.first]){
            dfs(adjList,visited,st,neighbour.first);
        }
    }
    st.push(source);
}

unordered_map<int,int> shortestPathDAGSingleSrc(unordered_map<int,list<pair<int,int>>> &adjList,int src){
    unordered_map<int,bool> visited;
    stack<int> st;
    for (auto node:adjList) {
        if(!visited[node.first]){
            dfs(adjList,visited,st,node.first);
        }
    }

    unordered_map<int,int> distance;
    for (auto node:adjList) {
        distance[node.first] = INT_MAX;
    }

    distance[src] = 0;

    while (!st.empty()){
        int topVal = st.top();
        st.pop();

        if(topVal != INT_MAX){
            for (auto neighbour:adjList[topVal]) {
                distance[neighbour.first] = min(distance[neighbour.first] , distance[topVal] + neighbour.second);
            }
        }
    }
    return distance;

}


int main(){
    WeiGraph g;
    g.addEdge(0,1,5, true);
    g.addEdge(0,2,3, true);
    g.addEdge(1,2,2, true);
    g.addEdge(1,3,6, true);
    g.addEdge(2,3,7, true);
    g.addEdge(2,4,4, true);
    g.addEdge(2,5,2, true);
    g.addEdge(3,4,-1, true);
    g.addEdge(4,5,-2, true);

    unordered_map<int,int> ans = shortestPathDAGSingleSrc(g.adjList,0);

    for (auto node:ans) {
        cout<<node.first<<" --> "<<node.second<<endl;
    }
}
