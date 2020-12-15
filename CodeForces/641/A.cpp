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
        int n,m;
        cin>>n>>m;

        if(n==1){
            cout<<0<<endl;
        }
        else if (n==2){
            cout<<m<<endl;
        }
        else{
            cout<<2*m<<endl;
        }

    }
  
}

