#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arrival[n];
        int departure[n];
        for(int i=0;i<n;i++)
            cin>>arrival[i];
        for(int i=0;i<n;i++)
            cin>>departure[i];

        vector<pair<int,char>> v;
        for(int i=0;i<n;i++)
            v.push_back(make_pair(arrival[i],'A'));
        for(int i=0;i<n;i++)
            v.push_back(make_pair(departure[i],'D'))
            
        sort(v.begin(),v.end());

        int platform=0;
        int ans=0;

        for(int i=0;i<v.size();i++){
            if(v[i].second=='A'){
                platform++;
                if(platform>ans)
                    ans=platform;
            }
            else{
                platform--;
            }
        }

        cout<<ans<<endl;
    }

	return 0;
}