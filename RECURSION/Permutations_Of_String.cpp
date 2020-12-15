#include <bits/stdc++.h>
using namespace std;
vector<string> vec;
vector<string> v;

void permute_string(string str,int l,int r){
    if(l==r){
        vec.push_back(str);
       //cout<<str<<endl;
        return;
    }
    for(int i=l;i<=r;i++){
        swap(str[l],str[i]);
        permute_string(str,l+1,r);
        swap(str[i],str[l]);
    }
}

int main() {
    string str;
    cin>>str;
    int n=str.length();
    permute_string(str,0,n-1);
    sort(vec.begin(),vec.end());
    v.push_back(vec[0]);
    for(int i=1;i<(vec.size());i++){
        if(v.back()!=vec[i])
           v.push_back(vec[i]);
    }
    
    for(int i=0;i<(v.size());i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
