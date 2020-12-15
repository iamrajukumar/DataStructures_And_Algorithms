#include<bits/stdc++.h>
using namespace std;

void inout(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}

int main(){
    
    inout();

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n+1];
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            mp[arr[i]]=i;
        }

        int max_pos=0,min_pos=INT_MAX;
        string res="";

        for(int i=1;i<=n;i++){
            int pos=mp[i];
            max_pos=max(max_pos,pos);
            min_pos=min(min_pos,pos);
            if((max_pos-min_pos+1)==i)
                res+='1';
            else
                res+='0';
        }

        cout<<res<<endl;

    }

}