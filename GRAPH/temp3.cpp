#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string str1;
        string str2;
        cin>>str1>>str2;
        int n=str1.length();
        int m=str2.length();

        map<char,int> m1;
        int flag=0;

        for(int i=0;i<n;i++){
            m1[str1[i]]=1;
        }

        for(int i=0;i<m;i++){
            if(m1.count(str2[i])==0){
                flag=1;
                break;
            }
        }

        if(flag==1){
            cout<<-1<<endl;
        }
        else{

            stack<char> st;
            for(int i=m-1;i>=0;i--){
                st.push(str2[i]);
            }
            int count=0;

            while(!st.empty()){
                count++;
                int temp=0;
                for(int i=0;i<n;i++){
                    if(str1[i]==st.top()){
                        st.pop();
                        if(st.empty())
                            break;
                    }
                }
            }


            cout<<count<<endl;









        }








    }
    




}
