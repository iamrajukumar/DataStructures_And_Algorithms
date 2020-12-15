#include <bits/stdc++.h>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void getstring(char inp[],char out[],int i,int j){
    if(inp[i]=='\0'){
        out[j]='\0';
       // cout<<"hello"<<endl;
        cout<<out<<endl;
        return;
    }
    int digit=inp[i]-'0';
    int x=table[digit].length();
    for(int k=0;k<x;k++){
        out[j]=table[digit][k];
        getstring(inp,out,i+1,j+1);
    }
}

int main() {
    char inp[11];
    char out[11];
    cin>>inp;
    getstring(inp,out,0,0);
}