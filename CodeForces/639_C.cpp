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
	
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        map<int,int> m;
        for(int i=1;i<=n;i++){
           // cout<<i+arr[i%n]<<endl;
            m[i+arr[i%n]]++;
        }

        int flag=0;
        for(auto a:m){
            if(a.second>=2){
                flag=1;
                break;
            }
        }

        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

       

    
    }
  
}

