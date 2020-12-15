#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string str;
        cin>>str;


        sort(str.begin(),str.end());


        if(str[0]!=str[k-1]){
            cout<<str[k-1]<<endl;
        }
        else{

            cout<<str[0];

            if(str[k]!=str[n-1]){
                for(int i=k;i<n;i++)
                    cout<<str[i];
            }
            else{

                // for(int i=0;i<(n-k+k-1)/k;i++)
                //     cout<<str[n-1];
                int count=n-(k);

                if(count%k==0){
                    count=count/k;
                }
                else{
                    count=count/k+1;
                }

                for(int j=1;j<=count;j++)
                    cout<<str[k];

            }

            cout<<endl;

        }





       

    }










}
