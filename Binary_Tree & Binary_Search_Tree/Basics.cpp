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

void PreOrder(node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(node* root){
    if(root==NULL)
        return;
    
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

void InOrder(node* root){
    if(root==NULL)
        return;
    
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

int CalculateHeight(node* root){
    if(root==NULL)
        return 0;
    int ls=CalculateHeight(root->left);
    int rs=CalculateHeight(root->right);

    return max(ls+1,rs+1);
}





int main(){
    node* root=build_BST();
    //PreOrder(root);
    cout<<CalculateHeight(root)<<endl;
}
