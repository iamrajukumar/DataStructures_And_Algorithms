#include<bits/stdc++.h>
using namespace std;

int main(){

    // freopen ("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

    int n,k;
    cin>>n>>k;

    int arr[n+1];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]=i+1;
    }

    sort(arr,arr+n);

    long long maxy=0;
    vector<int> pos;

    for(int i=n-k;i<n;i++){
        maxy+=arr[i];
        pos.push_back(m[arr[i]]);
    }

    cout<<maxy<<" ";

    sort(pos.begin(),pos.end());

    long long ans=1;

    for(int i=1;i<pos.size();i++){
        long long dif=pos[i]-pos[i-1];
        ans=(ans*dif)% 998244353;
    }

    cout<<ans<<endl;



}