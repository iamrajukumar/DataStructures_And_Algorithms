#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


    string str;
    cin>>str;

    int n=str.length();

    long long arr[26]={0},ans=0;

    for(int i=0;i<n;i++){
        arr[str[i]-'a']++;
    }

    for(int i=0;i<26;i++)
        ans=max(ans,arr[i]);

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            long long count=arr[j];
            long long temp=0;

            for(int k=0;k<n;k++){
                if((str[k]-'a')==j){
                    count--;
                    if(count==0)
                        break;
                }
                if(str[k]-'a'==i){
                    temp+=count;
                }
            }

            ans=max(ans,temp);
        }
    }

    cout<<ans<<endl;



}