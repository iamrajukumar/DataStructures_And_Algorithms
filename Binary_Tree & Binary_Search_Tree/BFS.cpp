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

node* build_BST(){
    int data;
    cin>>data;

    if(data==-1)
        return NULL;
    node* root=new node(data);
    root->left=build_BST();
    root->right=build_BST();
    return root;
}



void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty())
                q.push(temp);
        }
        else{
            cout<<temp->data<<" ";
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
    }
}






int main(){
    node* root=build_BST();
    //PreOrder(root)
    bfs(root);
}



