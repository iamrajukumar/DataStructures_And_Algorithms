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
	
 
	
    int n,m;
    cin>>n>>m;
 
     int arr[n];
 
    for(int i=0;i<n;i++)
        cin>>arr[i];
 
    if(n<=m){
        ll ans=1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int dif=abs(arr[i]-arr[j]);
    
                ans=(ans*dif)%m;
            }
        }
    
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
    }
  
}
 
