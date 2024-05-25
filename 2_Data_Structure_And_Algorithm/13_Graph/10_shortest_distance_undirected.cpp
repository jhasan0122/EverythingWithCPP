#include "iostream"
#include "vector"
#include "list"
#include "unordered_map"
#include "queue"
#include "algorithm"

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



int shortestPathUndirGph(unordered_map<int,list<int>> &adjList,int source,int dest){
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;

    queue<int> q;
    q.push(source);
    visited[source] = true;
    parent[source] = -1;

    while (!q.empty()){
        int frontNode = q.front();
        q.pop();

        for (auto neighbour:adjList[frontNode]) {
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = frontNode;
            }
        }
    }

    int path = 0;

    int currNode = dest;


    while (currNode!=source){
        currNode = parent[currNode];
        path++;
    }
    return path;
}

int main(){
    Graph g;
    g.addEdge(1,2, false);
    g.addEdge(2,3, false);
    g.addEdge(2,4, false);
    g.addEdge(3,4, false);
    g.addEdge(3,7, false);
    g.addEdge(7,6, false);
    g.addEdge(6,5, false);
    g.addEdge(5,4, false);


    cout<<shortestPathUndirGph(g.adjList,3,6);

}