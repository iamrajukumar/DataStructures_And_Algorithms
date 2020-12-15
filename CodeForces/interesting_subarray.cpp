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

        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int flag=0,s=0;
        for(int i=1;i<n;i++){
            int dif=abs(arr[i+1]-arr[i]);
            if(dif>=2){
                s=i;
                flag=1;
            }
        }

        if(flag==1){
            cout<<"YES"<<endl;
            cout<<s<<" "<<s+1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        


    }

}