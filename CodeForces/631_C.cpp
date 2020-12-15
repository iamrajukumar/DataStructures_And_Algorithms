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
	
    // int t;
    // cin>>t;
    // while(t--){

        int n,m;
        cin>>n>>m;

        vector<int> v(m+1);
       // v.pb(0);

        for(int i=0;i<n;i++){
            cin>>v[i];
         //   m1[]=v[i];
        }

        sort(v.rbegin(),v.rend());

        // for(int i=0;i<m;i++){
        //     cout<<v[i]<<" ";
        // }

        int last=n;
        int count=0;
        vector<int> ans;
        map<int,int> m1;
        for(int i=0;i<m;i++){
            last=min(0,last-v[i]);
            m1[arr[i]]=last+1;
            count++;
            if(last==0){
                break;
            }
        }

        if(count==m && last==0){
             cout<<""
        }



        
       

    
 //   }
  
}

