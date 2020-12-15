#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
     //   cout<<"hello"<<endl;
        int n,k;
        cin>>n>>k;
        
        map<int,int> m;
        vector<int> v;

        int x;
        for(int i=1;i<=n;i++){
            cin>>x;
            if(m.count(x)==0){
                m[x]=1;
                v.push_back(x);
            }
        }

        if(v.size()>k){
            cout<<-1<<endl;
        }
        else{

            while(v.size()<k){
                v.push_back(1);
            }

            int m=n*k;
            cout<<m<<endl;

            for(int i=1;i<=n;i++){
                for(int j=0;j<v.size();j++){
                    cout<<v[j]<<" ";
                }
            }

            cout<<endl;
            
        }

        


  //  cout<<"hi"<<endl;

        
    }
}