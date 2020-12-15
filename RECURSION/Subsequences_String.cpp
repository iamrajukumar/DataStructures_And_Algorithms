#include<iostream>
using namespace std;

void subsequences(char inp[],char out[],int i,int j){
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        return;
    }

    out[j]=inp[i];
    subsequences(inp,out,i+1,j+1);
    subsequences(inp,out,i+1,j);
}

int main(){
    char inp[50];
    cin>>inp;
    char out[50];
    subsequences(inp,out,0,0);
    return 0;
}