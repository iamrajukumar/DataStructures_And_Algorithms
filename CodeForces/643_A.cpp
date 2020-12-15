#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        k--;
       // int ans=0;
        while(k>0){
            ll miny=INT_MAX;
            ll maxy=0;
            ll temp=n;
            while(temp>0){
                ll x=temp%10;
                miny=min(x,miny);
                maxy=max(x,maxy);
                temp=temp/10;
            }
            n=n+maxy*miny;
            k--;
            if(miny==0 || maxy==0)
                break;
        }

        cout<<n<<endl;







    }
}