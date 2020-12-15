#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.length();

        int zero[n+1]={0};
        int one[n+1]={0};
        int a=0,b=0;

        for(int i=0;i<n;i++){
            if(str[i]=='1')
                b++;
            else
                a++;
            zero[i+1]=a;
            one[i+1]=b;
        }

        int miny=INT_MAX;
        for(int i=1;i<=n;i++){
            int c1=0;
            if(i>1){
                int left=i-1;
                c1=left-zero[i-1];
            }
            if(i<n){
                int right=n-i;
                c1+=(right-(one[n]-one[i]));
            }
            miny=min(miny,c1);

            int c2=0;
            if(i>1){
                int left=i-1;
                c2=left-one[i-1];
            }
            if(i<n){
                int right=n-i;
                c2+=(right-(zero[n]-zero[i]));
            }
            miny=min(miny,c2);

            if(str[i]=='0'){
                int temp=n-zero[n];
                miny=min(temp,miny);
            }
            else{
                int temp=n-one[n];
                miny=min(temp,miny);
            }
        }

        cout<<miny<<endl;






    }
    
}
