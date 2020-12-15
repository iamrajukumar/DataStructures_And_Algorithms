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
	
    int n;
    cin>>n;

    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    vector<int> v;
    map<int,ll> m1;

    for(int i=1;i<=n;i++){
        if(m1.count(i-arr[i])==0){
            m1[i-arr[i]]=arr[i];
        }
        else{
            m1[i-arr[i]]+=arr[i];
        }
    }

    

 

    ll maxy=0;
    for(auto a:m1){
        maxy=max(maxy,a.second);
    }

    cout<<maxy<<endl;



    
  
}

