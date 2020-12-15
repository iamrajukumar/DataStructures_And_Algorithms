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
        ll n;
        cin>>n;

        ll ans=0;

        for(int i=0;i<60;i++){
            ll j=1;
            if(n & (j<<i)){
                ans+=(j<<(i+1))-1;
            }
        }
        cout<<ans<<endl;
    
    }
  
}

