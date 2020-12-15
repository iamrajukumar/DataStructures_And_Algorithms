#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n+1];
        for(int i=1;i<=n;i++){
            arr[i]=pow(2,i);
        }

        long long sum1=0,sum2=0;

        for(int i=n/2;i<n;i++){
            sum2+=arr[i];
        }

        sum1=arr[n];

        for(int i=1;i<n/2;i++){
            sum1+=arr[i];
        }

        cout<<sum1-sum2<<endl;



        
    }
}