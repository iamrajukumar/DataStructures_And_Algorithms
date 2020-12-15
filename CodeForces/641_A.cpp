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
        int n,k;
        cin>>n>>k;

        int div=0;
        for(div=2;div<=n;div++){
            if(n%div==0){
                break;
            }
        }

        if(n%2==0){
            cout<<n+k*2<<endl;
        }
        else{
            //if(div%2!=0){
                cout<<n+div+2*(k-1)<<endl;
           // }
            
        }


       

    
    }
  
}

