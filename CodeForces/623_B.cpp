#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007 
#define pb push_back  
 

int main(){

    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
       // cout<<t<<endl;
        int a,b,p;
    	cin>>a>>b>>p;
    	string str;
    	cin>>str;
    	int n=str.length();

        int i=0,ans=0;
        //int cost[n]={0};
         vector<pair<int,int>> v;

        while(i<n-1){

            char ch=str[i];
            while(i<n-1 &&str[i]==ch){
                i++;
            }

            if(ch=='A'){
                v.pb({a,i});
                ans+=a;
            }
            else{
                v.pb({b,i});
                ans+=b;
            }
        }


        if(ans<=p){
            cout<<1<<endl;
        }
        else{
            for(int j=0;j<v.size();j++){
                ans-=v[j].first;
                if(ans<=p){
                    cout<<v[j].second+1<<endl;   
                    break;  
                }
            }
        }

	
	}
    return 0;   
}