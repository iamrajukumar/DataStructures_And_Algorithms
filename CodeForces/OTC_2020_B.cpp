//                                         -------------------------rajukumarbhui-----------------------                 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    vector<int> ans;
    stack<int> st;
    stack<int> st1;
    stack<int> st2;
    string str;

    cin>>str;
    int k=0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            st.push(i+1);
        }
        else{
            st2.push(i+1);
        }
    }

    while(!st.empty()){
        st1.push(st.top());
        st.pop();
    }

    while(!st1.empty() && !st2.empty()){
        if(st1.top()<st2.top()){
             ans.pb(st1.top());
            ans.pb(st2.top());
            st1.pop();
            st2.pop();
            k=1;
        }
        else{
            st2.pop();
        }
       
    }

    cout<<k<<endl;
    if(k!=0){
        cout<<ans.size()<<endl;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
	
    
  
}

