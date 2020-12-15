
// To Build A Graph of generic data type with Adjacency List using hashing(MAP)

#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T> > m;
    public:
        
        void Addedge(T u,T v,bool bidir=true){
            m[u].push_back(v);
            if(bidir){
                m[v].push_back(u);
            }
        }

        void printedge(){
            for(auto l:m){
                cout<<l.first<<" -> ";
                for(auto n:l.second)
                    cout<<n<<" ";
                cout<<endl;
            }
        }

        
        void BFS(T src){
            queue<T> q;
            map<T,bool> visited;
            visited[src]=true;
            q.push(src);

            while(!q.empty()){
                T node=q.front();
                q.pop();
                cout<<node<<" ";
                for(auto a:m[node]){
                    if(!visited[a]){
                        q.push(a);
                        visited[a]=true;
                    }
                }

            }



        }


};


int main(){
    Graph<int> g;
    g.Addedge(0,1);
    g.Addedge(0,4);
    g.Addedge(4,3);
    g.Addedge(1,4);
    g.Addedge(1,2);
    g.Addedge(2,3);
   // g.printedge();
    g.BFS(0);

}