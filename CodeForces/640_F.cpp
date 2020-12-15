#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        int n0,n1,n2;
        cin>>n0>>n1>>n2;

        if(n1==0){
            if(n0!=0){
                for(int i=1;i<=(n0+1);i++)
                cout<<0;
            }
            else{
                for(int i=1;i<=(n2+1);i++)
                cout<<1;
            }
            cout<<endl;
        }
        else{
            for(int i=1;i<=n2;i++)
                cout<<1;
            cout<<1;

            for(int i=1;i<=n0;i++)
                cout<<0;
            cout<<0;

            for(int i=1;i<=(n1-1);i++){
                if(i&1)
                    cout<<1;
                else
                    cout<<0;
            }

            cout<<endl;

        }
    }




}