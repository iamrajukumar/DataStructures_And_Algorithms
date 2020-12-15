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

    char def[4];
    def[0]='S';
    def[1]='E';
    def[2]='T';

    int n,k;
    cin>>n>>k;

    string arr[n+1];
    map<string,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }

    int ans=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string str;

            for(int l=0;l<k;l++){
                if(arr[i][l]==arr[j][l]){
                    str+=arr[j][l];
                }
                else{
                    for(int p=0;p<=2;p++){
                        if(def[p]!=arr[i][l] && def[p]!=arr[j][l])
                            str+=def[p];
                    }
                }
            }

            if(mp[str]>j){
                ans++;
            }
        }
    }


    cout<<ans<<endl;








}