#include <bits/stdc++.h>
using namespace std;


int convert_to_int(string str,int n,int i){
    if(i==n)
        return 0;

    int a=(int)str[i]-48;
    int x=a*pow(10,n-1-i);
    return x+convert_to_int(str,n,i+1);
}

int main() {
    string str;
    cin>>str;
    int n=str.length();
    cout<<convert_to_int(str,n,0);
}
