#include<bits/stdc++.h>
using namespace std;

void replace(char inp[],char out[],int i,int j){
    if(inp[i]=='\0'){
        out[j]=inp[i];
        cout<<out<<endl;
        return;
    }

        if(inp[i]=='p' && inp[i+1]=='i'){
            out[j]='3';
            out[j+1]='.';
            out[j+2]='1';
            out[j+3]='4';
            j=j+3;
            i=i+1;
        }
        else{
            out[j]=inp[i];
        }
   // cout<<out<<endl;
    replace(inp,out,i+1,j+1);

}

int main(){
    int n;
    cin>>n;
    while(n--){
    char inp[1001];
    cin>>inp;
   // int n=inp.length();
    char out[1001];
    replace(inp,out,0,0);
    }
    return 0;
}