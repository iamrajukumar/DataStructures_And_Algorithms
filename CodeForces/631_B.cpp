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
    
        for(int i=1;i<=n;i++){
            cin>>arr[i];
           
        }

 
        int maxy=0;
        for(int i=1;i<=n;i++){
            maxy=max(maxy,arr[i]);
            
        }

            int len1=maxy;
            int len2=n-maxy;

           // cout<<len1<<" "<<len2<<endl;
            int p,q,r,s;


            set<int> s1;
            set<int> s2;
            vector<pair<int,int>> ans;

            for(int i=1;i<=len1;i++){
                if(arr[i]<=len1)
                    s1.insert(arr[i]);
            }
            for(int i=len1+1;i<=n;i++){
                if(arr[i]<=(n-len1))
                    s2.insert(arr[i]);
            }

            if(s1.size()==len1 && s2.size()==(n-len1))
                ans.pb(mp(len1,n-len1));
            
                if(len1!=len2){
                    set<int> s3;
                set<int> s4;

                for(int i=1;i<=len2;i++){
                    if(arr[i]<=(len2))
                        s3.insert(arr[i]);
                }
                for(int i=len2+1;i<=n;i++){
                    if(arr[i]<=(n-len2))
                        s4.insert(arr[i]);
                }

                if(s3.size()==len2 && s4.size()==(n-len2))
                    ans.pb(mp(len2,n-len2));
            }

            cout<<ans.size()<<endl;
            if(ans.size()!=0){
                for(int i=0;i<ans.size();i++){
                    cout<<ans[i].first<<" "<<ans[i].second<<endl;
                }
            }

    
    }
  
}

