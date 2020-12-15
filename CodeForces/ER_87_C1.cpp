#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926535

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        n=n*2;

        if(n%4==0){
            double ans;
            ans=(1)/(tan(pi/n));
            cout<<fixed<<setprecision(10)<<ans<<"\n";
        }
        else{
            double ans;
            ans=(1)/sin(pi/n);
            cout<<fixed<<setprecision(10)<<ans<<"\n";
        }

    }




}