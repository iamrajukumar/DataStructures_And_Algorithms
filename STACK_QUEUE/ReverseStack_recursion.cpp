#include <iostream>
#include<stack>
using namespace std;

void insert_at_bottom(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    else{
        int y=s.top();
        s.pop();
        insert_at_bottom(s,x);
        s.push(y);
    }
}


void reversestack(stack<int> &s){
    if(s.empty())
        return;
    int y=s.top();
    s.pop();
    reversestack(s);
    insert_at_bottom(s,y);
}



int main(){
    int n;
    cin>>n;
    int x;
    stack<int> s;
    for(int i=0;i<n;i++){
        cin>>x;
        s.push(x);
    }

    reversestack(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
