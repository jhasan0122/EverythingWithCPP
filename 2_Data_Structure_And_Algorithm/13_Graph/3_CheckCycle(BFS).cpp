#include "iostream"
#include "vector"
#include "list"
#include "unordered_map"
#include "queue"

using namespace std;

class Graph{
public:
    unordered_map<int,list<int>> adjList;
    vector<vector<int>> edges;

    void addEdge(int from,int to,bool direction){
        adjList[from].push_back(to);
        adjList[to];

        if(!direction){
            adjList[to].push_back(from);
        }

        vector<int> edge;
        edge.push_back(from);
        edge.push_back(to);
        edges.push_back(edge);
    }
    void printAdjList(){
        for (auto node:adjList) {
            cout<<node.first<<"--> ";
            for (auto neighbour:node.second) {
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
    }
};

bool bfs(unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited,unordered_map<int,int> &parent,int source){
    visited[source] = true;
    parent[source] = -1;

    queue<int> q;
    q.push(source);

    while (!q.empty()){
        int frontNode = q.front();
        q.pop();

        for (auto neighbour:adjList[frontNode]) {
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = frontNode;
            }
            else if(parent[frontNode]!=neighbour){
                return true;
            }
        }
    }
    return false;

}

bool checkCycleBFS(unordered_map<int,list<int>> &adjList){
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    vector<vector<int>> visitedSeq;

    for (auto node :adjList) {
        if(!visited[node.first]){
            if(bfs(adjList,visited,parent,node.first)){
                return true;
            }
        }
    }
    return false;

}

int main(){
    Graph g;
    g.addEdge(0,1, false);
    g.addEdge(0,2, false);
    g.addEdge(0,7, false);
    g.addEdge(1,4, false);
    g.addEdge(2,3, false);
    g.addEdge(2,4, false);
    g.addEdge(3,5, false);
    g.addEdge(3,6, false);
    g.addEdge(6,7, false);

    if(checkCycleBFS(g.adjList)){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";
    }

}