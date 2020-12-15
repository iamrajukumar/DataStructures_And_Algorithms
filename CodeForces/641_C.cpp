#include<bits/stdc++.h>
using namespace std;

int main(){


    freopen ("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    int n,k;
    cin>>n>>k;

    string num;
    cin>>num;

   // cout<<num<<endl;


    for(int i=0;i<num.size();i++){
        if(num.size()==1){
            if(k>0){
                cout<<0;
            }
            else{
                cout<<num[0];
            }
            break;
        }
        if(i==0){
            if(num[i]!='1' && k>0){
                cout<<1;
                k--;
            }
            else{
                cout<<num[i];
            }
        }
        else{
           // cout<<endl<<i<<" ";
            if(num[i]!='0' && k>0){
                cout<<0;
                k--;
            }
            else{
                cout<<num[i];
            }
        }

     //   cout<<endl<<" "<<k<<" ";

        
    }

    

    cout<<endl;






}