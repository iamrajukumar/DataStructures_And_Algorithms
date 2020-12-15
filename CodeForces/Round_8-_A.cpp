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

        int n,d;
        cin>>n>>d;

        if(d<=n){
            cout<<"YES"<<endl;
        }
        else{
            
            int last=(int)sqrt(d)+10;

            int flag=0;
            for(int x=1;x<=last;x++){
                if(x + (d + x) / (x + 1) <= n){
                    flag=1;
                    break;
                }
            }

            if(flag==0)
                cout<<"NO"<<endl;
            else
            {
                    cout<<"YES"<<endl;
            }
            
           



        }


       

    
    }
  
}

