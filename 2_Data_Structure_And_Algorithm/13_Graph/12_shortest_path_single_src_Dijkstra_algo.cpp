#include "iostream"
#include "vector"
#include "list"
#include "unordered_map"
#include "set"

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

unordered_map<int,int> shortestPathDijkstraAlgoSingleSrc(unordered_map<int,list<pair<int,int>>> adjList,int src){
    unordered_map<int,int> distance ;

    for (auto node:adjList) {
        distance[node.first] = INT_MAX;
    }

    distance[src] = 0;

    set<pair<int,int>> setOfPair;
    setOfPair.insert({0,src});

    while (!setOfPair.empty()){
        auto topNode = *(setOfPair.begin());
        setOfPair.erase(setOfPair.begin());

        int topNodeDistance = topNode.first;
        int topNodeValue = topNode.second;

        for (auto neighbour:adjList[topNodeValue]) {
            if(topNodeDistance + neighbour.second < distance[neighbour.first]){

                auto prevRecordIndex = setOfPair.find({distance[neighbour.first],neighbour.first});

                if(prevRecordIndex != setOfPair.end()){
                    setOfPair.erase(prevRecordIndex);
                }

                distance[neighbour.first] = topNodeDistance + neighbour.second;
                setOfPair.insert({distance[neighbour.first],neighbour.first});
            }
        }
    }
    return distance;

}


int main(){
    WeiGraph g;
    g.addEdge(2,1,3, false);
    g.addEdge(2,0,1, false);
    g.addEdge(0,1,7, false);
    g.addEdge(1,4,1, false);
    g.addEdge(1,3,5, false);
    g.addEdge(0,3,2, false);
    g.addEdge(3,4,7, false);

    unordered_map<int,int> ans = shortestPathDijkstraAlgoSingleSrc(g.adjList,0);

    for (auto node:ans) {
        cout<<node.first<<" --> "<<node.second<<endl;
    }
}