#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        int sum=0,even=0,zero=0;

        for(int i=0;i<str.length();i++){
            int key=(int)str[i]-'0';
            if(key%2==0){
                if(key==0){
                    if(zero==1)
                        even=1;
                }
                else{
                    even=1;
                }
            }
            if(key==0){
                zero=1;
            }
            sum+=key;
        }

        if(zero==1 && even==1 && sum%3==0){
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }


    }

}