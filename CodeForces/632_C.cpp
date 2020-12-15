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
	
   ll n;
   cin>>n;

   ll x;
   ll prefix[n+1]={0};
   
   for(int i=0;i<n;i++){
       cin>>x;
       prefix[i+1]=x+prefix[i];
   }

    ll s=0,e=0,ans=0;
    set<ll> st={0};

    while(s<n){

        while(e<n && st.count(prefix[e+1])==0){
            e++;
            st.insert(prefix[e]);
        }

        st.erase(prefix[s]);
      //  cout<<(e-s)<<endl;
        ans+=(e-s);
        s++;
    }

    

    cout<<ans<<endl;

}

