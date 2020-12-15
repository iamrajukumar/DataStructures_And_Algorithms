#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void mappedstring(char map[],char out[],int j,int n){
    if(n==0){
        out[j]='\0';
       // cout<<out<<endl;
        string str=out;
        reverse(str.begin(),str.end());
       // cout<<str<<endl;
        ans.push_back(str);
        return;
    }

    if(n<10){
         out[j]=map[n%10];
         mappedstring(map,out,j+1,n/10);
    }
    else{
        int x=n%10;
        out[j]=map[x];
        mappedstring(map,out,j+1,n/10);
        n=n/10;
        int y=n%10;
        int z=y*10+x;
        if(z<=26){
            out[j]=map[z];
            mappedstring(map,out,j+1,n/10);
        }
    }

}

int main() {
    int n;
    cin>>n;
    char map[27];
    char out[1000001];
    for(int i=1;i<26;i++){
        map[i]=(char)(64+i);
    }
    // for(int i=1;i<=26;i++){
    //     cout<<map[i]<<" "<<i<<endl;
    // }
    mappedstring(map,out,0,n);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
