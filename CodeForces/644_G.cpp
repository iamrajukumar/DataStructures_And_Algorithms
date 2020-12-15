#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;

        if(a*n==b*m){
            cout<<"YES"<<endl;

            int d = 0;
            for (d=1;d<m;d++) {
                if (d*n%m== 0) {
                    break;
                }
            }

            int dx=0;
            int result[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    result[i][j]=0;
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < a; j++) {
                   // cout<<i<<" "<<j<<endl;
                    result[i][(j + dx) % m] = 1;
                }
                dx+=d;
            }

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<result[i][j];
                }
                cout<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
        }



    }

}