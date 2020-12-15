#include<bits/stdc++.h>
using namespace std;

bool mycompare(pair<int,int> p1,pair<int,int> p2){
        return p1.first>p2.first;
}


int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int id,dl,pr;
        vector<pair<int,int>> v;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>id>>dl>>pr;
            m[dl]=pr;
            v.push_back(make_pair(pr,dl));
        }
        
        
        sort(v.begin(),v.end(),mycompare);
        
        
        int profit=0;
        int task=0;
         bool slots[n];
         for(int i=0;i<n;i++)
            slots[i]=false;
        for(int i=0;i<n;i++){
            for(int j=min(v[i].second-1,n-1);j>=0;j--){
                if(!slots[j]){
                    slots[j]=true;
                    task++;
                    profit+=v[i].first;
                    break;
                }
            }
        }
        cout<<task<<" "<<profit<<endl;
        
    }
    
    
	return 0;
}