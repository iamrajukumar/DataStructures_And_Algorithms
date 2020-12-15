#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int d=n/k;
        int rem=n%k;

        int x=k/2;
        int y=x+(k%2==0?0:1);

      //  cout<<rem<<" "<<x<<endl;

        int ans=n-n%k;

        ans+=min(k/2,n%k);
        cout<<ans<<endl; 




    }


}