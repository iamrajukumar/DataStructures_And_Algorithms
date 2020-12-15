#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        int flag=0;

        if(n>=15){
            for(int i=1;i<=6;i++){
                ll temp=n-i;
                if(temp%14==0){
                    flag=1;
                    break;
                }
            }
        }


        cout<<(flag==1?"YES\n":"NO\n");

        


    }

}