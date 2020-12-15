#include <bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int,int> > custompair;

vector<int> mergeksortedresult(vector<vector<int> > v){
    vector<int> result;
    priority_queue<custompair,vector<custompair>,greater<custompair> > pq;
    int n=v.size();
    for(int i=0;i<n;i++){
        pq.push(make_pair(v[i][0],make_pair(i,0)));
       // cout<<v[i][0]<<endl;
    }
    

    while(pq.empty()==false){
        custompair temp=pq.top();
        pq.pop();
        int x=temp.second.first;
        int y=temp.second.second;
        result.push_back(temp.first);
        int c=v[x].size();
        if((y+1)<c){
            pq.push(make_pair(v[x][y+1],make_pair(x,y+1)));
        }
    }
    return result;
}



int main() {
    int n,k;
    cin>>n>>k;
    vector<vector<int>> v(n,vector<int> (k));
    int t;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>v[i][j];
        }
    }
   // cout<<v[0][0]<<" "<<v[1][0]<<" "<<v[2][0]<<endl;
    vector<int> result=mergeksortedresult(v);
    int count=result.size();
    for(int i=0;i<count;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
