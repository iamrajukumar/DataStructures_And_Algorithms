//                                         -------------------------rajukumarbhui-----------------------                 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair


int pref[40040]={0};
int len;
void build(int a,int b){
    len = a * b;
	pref[0] = 0;
	for(int i = 1; i <= len; i++){
		pref[i] = pref[i - 1];
		if((i % a) % b != (i % b) % a)
			pref[i]++;
	}

}

ll query(ll l){
	ll cnt = l / len;
	ll rem = l % len;
	return pref[len]  *  cnt + pref[rem]; 

}




int main(){

	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
    int t;
    cin>>t;
    while(t--){

        int a,b,q;
        cin>>a>>b>>q;

        build(a,b);

        for(int i=1;i<=q;i++){
            ll l,r;
            cin>>l>>r;

            cout<<query(r)-query(l-1)<<" ";
        }
        cout<<endl;
       

    
    }
  
}

