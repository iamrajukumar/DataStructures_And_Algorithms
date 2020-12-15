#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,e;
        cin>>n>>e;

        map<pair<int,int>,int> mp;
        int x,y,z;
        for(int i=0;i<e;i++){
            cin>>x>>y>>z;
            mp[{x,y}]=z;
        }

        int dist[n]={INT_MAX};
        dist[0]=0;

        for(int i=0;i<n-1;i++){
            for(auto a:mp){
                x=(a.first).first;
                y=(a.first).second;
                z=a.second;
                dist[y]=min(dist[y],dist[x]+z);
            }
        }
        int flag=0;
        for(auto a:mp){
                x=(a.first).first;
                y=(a.first).second;
                z=a.second;
                if(dist[y]>(dist[x]+z)){
                    flag=1;
                    break;
                }
            }

        if(flag==0)
            cout<<"negative cycle not exist"<<endl;
        else
            cout<<"negative cycle exist"<<endl;



    }


}
