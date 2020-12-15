#include <iostream>
#include<stack>
#include<string>
using namespace std;

bool check_parenthesis(string str){
    int n=str.length();
    if(n%2!=0){
        return false;
    }
    
    for(int i=0;i<n;i++){
        char c=str[i];
        if(c=='(' || c=='{' || c=='[')
            s.push(c);
        else if(c==')'){
            if(s.top()=='('){
                s.pop();
            }
            else{
                return false;
            }
        }
        else if(c=='}'){
            if(s.top()=='{'){
                s.pop();
            }
            else{
                return false;
            }
        }
        else if(c==']'){
            if(s.top()=='['){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s.empty())
        return true;

    return false;    
}

int main(){
    string str;
    cin>>str;
    
    if(check_parenthesis(str))
        cout<<"Yes"<<endl;
    else    
        cout<<"No"<<endl;
    
}
