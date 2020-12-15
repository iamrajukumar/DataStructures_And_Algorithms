#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;

        string str[n];
        for(int i=0;i<n;i++)
            cin>>str[i];

        string ans=str[0];
        int done=0;

        for(int i=0;i<m;i++){
            char save=ans[i];
            for(char j='a';j<='z';j++){
                ans[i]=j;

                int flag=1;

                for(int p=0;p<n;p++){
                    int error=0;
                    for(int q=0;q<m;q++){
                        if(str[p][q]!=ans[q])
                            error++;
                    }
                    if(error>1){
                        flag=0;
                        break;
                    }
                }

                if(flag==1){
                    done=1;
                    cout<<ans<<endl;
                    break;
                }


            }
            if(done==1)
                break;

            ans[i]=save;
        }

        if(done==0){
            cout<<-1<<endl;
        }

    }

}