#include <bits/stdc++.h>
using namespace std;
vector<string> ans;

void permutation(char inp[],int j){
    if(inp[j]=='\0'){
        //string str=inp;
        ans.push_back(inp);
        return;
    }

    for(int i=j;inp[i]!='\0';i++){
        swap(inp[j],inp[i]);
        permutation(inp,j+1);
        swap(inp[i],inp[j]);
    }
}

int main() {
    char inp[100];
    cin>>inp;
    permutation(inp,0);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(ans[i]>inp)
            cout<<ans[i]<<" ";
    }
}
