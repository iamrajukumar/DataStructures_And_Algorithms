#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left=NULL;
    node* right=NULL;
    node(int data){
        this->data=data;
    }
};

node* insertinbst(node* root,int data){
    if(root==NULL)
        return new node(data);
    
    if(data<=root->data){
        root->left=insertinbst(root->left,data);
    }
    else{
        root->right=insertinbst(root->right,data);
    }
    return root;
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void InOrder(node* root,int k1,int k2){
    if(root==NULL)
        return;
    
    InOrder(root->left,k1,k2);
    if(root->data>=k1 && root->data<=k2){
        cout<<root->data<<" ";
    }
    InOrder(root->right,k1,k2);
}



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int data;
        node* root=NULL;
        for(int i=0;i<n;i++){
            cin>>data;
            root=insertinbst(root,data);
        }
       cout<<"# Preorder : ";
        preorder(root);
        cout<<endl;
        int k1,k2;
        cin>>k1>>k2;
        cout<<"# Nodes within range are : ";
        InOrder(root,k1,k2);
        cout<<endl;
    }
}
