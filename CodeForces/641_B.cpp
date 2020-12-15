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
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];

        int ans=1;
        int count[n+1]={0};
        for(int i=1;i<=n;i++)
            count[i]=1;


        for(int i=1;i<=n;i++){
            for(int j=i*2;j<=n;j+=i){
                if(arr[j]>arr[i]){
                    count[j]=max(count[i]+1,count[j]);
                    ans=max(ans,count[j]);
                }
            }
        }
        cout<<ans<<endl;
       

    
    }
  
}

