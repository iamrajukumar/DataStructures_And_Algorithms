#include <bits/stdc++.h>
using namespace std;
    string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
    string table[]={
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };

void printstring(string s2){
    for(int i=0;i<11;i++){
        string s1=searchIn[i];
       // cout<<s1<<" "<<s2<<endl;
        if (s1.find(s2) != std::string::npos) {
        //    cout<<"hello"<<endl;
            std::cout<<searchIn[i]<<endl;
        }
    }
}


void generatestring(char inp[],char out[],int i,int j){
    if(inp[i]=='\0'){
        out[j]='\0';
        string str=out;
        printstring(str);
       // cout<<str<<endl;
        return;
    }
    int digit=inp[i]-'0';
    if(digit==0 || digit==1)
        generatestring(inp,out,i+1,j);

    for(int k=0;k<(table[digit].length());k++){
        out[j]=table[digit][k];
        generatestring(inp,out,i+1,j+1);
    }
}


int main() {
    
    char inp[11];
    cin>>inp;
    char out[11];
    generatestring(inp,out,0,0);

}
