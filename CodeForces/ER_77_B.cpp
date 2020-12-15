#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int p=min(a,b);
        int q=max(a,b);

        if((p+q)%3==0 && (p*2)>=q){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }



}