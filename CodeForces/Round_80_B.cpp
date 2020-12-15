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

        ll a,b;
        cin>>a>>b;

        b++;
        int d=0;
        while(b>0){
            d++;
            b=b/10;
        }

        ll ans=a*(d-1);

        cout<<ans<<endl;    
       

    
    }
  
}

