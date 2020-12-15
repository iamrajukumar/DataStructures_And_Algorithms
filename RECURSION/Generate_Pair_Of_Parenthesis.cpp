#include <iostream>
using namespace std;

void generate_parenthesis(char out[],int i,int open,int close,int n){
    if(i==2*n){
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
    if(close<open){
        out[i]=')';
        generate_parenthesis(out,i+1,open,close+1,n);
    }
    if(open<n){
        out[i]='(';
        generate_parenthesis(out,i+1,open+1,close,n);
    }
    
}

int main() {
    int n;
    cin>>n;
    char out[2*n+1];
    generate_parenthesis(out,0,0,0,n);
}
