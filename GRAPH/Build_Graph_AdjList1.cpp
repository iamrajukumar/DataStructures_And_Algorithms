
// To Build A Graph using Adjacency List with array of list

#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int>* l;
    public:
    
    Graph(int v){
        V=v;
        l=new list<int>[V];
    }
    
    void Addedge(int u,int v,bool bidir=true){
        l[u].push_back(v);
        if(bidir)
            l[v].push_back(u);
    }

    void printedge(){
        for(int i=0;i<V;i++){
            cout<<i<<" -> ";
            for(auto a:l[i]){
                cout<<a<<" ";
            }
            cout<<endl;
        }
    }

};



int main(){
    Graph g(5);
    g.Addedge(0,1);
    g.Addedge(0,4);
    g.Addedge(4,3);
    g.Addedge(1,4);
    g.Addedge(1,2);
    g.Addedge(2,3);
    g.printedge();
}