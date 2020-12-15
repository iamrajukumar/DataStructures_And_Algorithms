//                                         -------------------------rajukumarbhui-----------------------                 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

void inout(){	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    inout();

    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;

        string str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        ll ans=0;
        if((2*x)<=y){
            int c=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(str[i][j]=='.')
                        c++;
                }
            }
            ans=x*c;
        }
        else{
            for(int i=0;i<n;i++){
                int mark[m+1]={0};
                for(int j=0;j<m;j++){
                    if(str[i][j]=='.'){
                        ans+=x;
                        if(j>0){
                            if(str[i][j]=='.' && str[i][j-1]=='.' && mark[j]==0 && mark[j-1]==0){
                               // cout<<"hi";
                                ans+=y;
                                ans=ans-2*x;
                                mark[j]=1;
                                mark[j-1]=1;
                            }
                        }
                    }

                    
                }
            }
        }
        cout<<ans<<endl;
        
    }
    
  
}

