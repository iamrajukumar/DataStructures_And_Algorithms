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

        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];

        int cnt[2*k+2]={0};

        for(int i=1;i<=n/2;i++){
            cnt[arr[i]+arr[n-i+1]]++;
        }

        int pref[2*k+2]={0};

        for(int i=1;i<=n/2;i++){
            int l=min(arr[i],arr[n-i+1])+1;
            int r=max(arr[i],arr[n-i+1])+k;

         //   cout<<l<<" "<<r<<endl;

            pref[l]++;
            pref[r+1]--;
        }

        for(int i=1;i<=2*k+1;i++){
            pref[i]=pref[i]+pref[i-1];
          //  cout<<pref[i]<<endl;
        }

        int ans=INT_MAX;
        for(int i=2;i<=2*k;i++){
            int temp=(pref[i]-cnt[i])+(n/2-pref[i])*2;
            ans=min(ans,temp);
        }

        cout<<ans<<endl;
       

    
    }
  
}

