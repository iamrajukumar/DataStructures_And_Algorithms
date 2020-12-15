//                                         -------------------------rajukumarbhui-----------------------                 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
    int t;
    cin>>t;
    while(t--){
        int n,s,k;
        cin>>n>>s>>k;

        map<int,int> m1;
        int x;
        for(int i=0;i<k;i++){
            cin>>x;
            m1[x]=1;
        }

        if(m1[s]==0){
            cout<<0<<endl;
        }
        else{
            int miny=INT_MAX;
            for(int i=max(1,s-k);i<=min(n,s+k);i++){
                if(m1[i]==0){
                    miny=min(miny,abs(i-s));
                }
            }

            cout<<miny<<endl;

        }


       

    
    }
  
}

