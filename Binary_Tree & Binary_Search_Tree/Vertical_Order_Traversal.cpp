#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right; 
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node* build(){
    int n;
    cin>>n;
    queue<node*> q;
    node* root=new node(n);
    q.push(root);
    while(!q.empty())
    {
        node* f=q.front();
        q.pop();
        int c1,c2;
        cin>>c1>>c2;

        if(c1!=-1){
            f->left=new node(c1);
            q.push(f->left);
        }
        if(c2!=-1){
            f->right=new node(c2);
            q.push(f->right);
        }
        
    }
    return root;
}

void printvertically(node* root){
    queue<pair<node*,int>> q;
    int hd=0;
    q.push(make_pair(root,hd));

    map<int,vector<int>> m;

    while(!q.empty()){
        pair<node*,int> temp=q.front();
        q.pop();
        hd=temp.second;
        node* x=temp.first;
        m[hd].push_back(x->data);

        if(x->left!=NULL)
            q.push(make_pair(x->left,hd-1));
        if(x->right!=NULL)
            q.push(make_pair(x->right,hd+1));
    }

    map<int,vector<int>> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<it->second.size();i++){
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }

}
 
 

int main(){
    node* root=build();
    printvertically(root);
}



