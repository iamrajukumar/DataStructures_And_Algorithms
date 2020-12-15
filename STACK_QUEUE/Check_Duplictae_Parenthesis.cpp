#include <iostream>
#include<stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        stack<char> st;
        int n=str.length();
        int flag=0;
        for(int i=0;i<n;i++){
            if(str[i]!=')'){
              //  cout<<"if"<<endl;
                st.push(str[i]);
            }
            else{
               // cout<<"else"<<endl;
                while(st.top()!='(' && !st.empty()){
                    st.pop();
                }
               //  if(!st.empty())
                    st.pop();
                 if((i+1)<n && !st.empty() && st.top()=='('  && str[i+1]==')'){
                    flag=1;
                    break;
                }
            }
           
        }

        if(flag==1)
            cout<<"Duplicate"<<endl;
        else
            cout<<"Not Duplicates"<<endl;
    }

}
