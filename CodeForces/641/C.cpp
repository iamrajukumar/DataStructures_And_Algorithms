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

        int n;
        cin>>n;

        int x=n;
        int y=n-2;

        int mul=n/2;
        ll sum=0;

        for(int i=1;i<=n/2;i++){
            ll temp=x*2+y*2;
            x=x-2;
            y=y-2;
            sum+=(mul*temp);
            mul--;
        }

        cout<<sum<<endl;




        
    
    
    
    

    
    }
  
}

