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

node* deletenode(node* root,int data){
    if(root==NULL)
        return NULL;
    else if(data<root->data){
        root->left=deletenode(root->left,data);
        return root;
        }
    else if(data==root->data){
            //0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            //1 child
            if(root->left!=NULL && root->right==NULL){
                node *temp=root->left;
                delete root;
                return temp;
            }
            //1 child
            if(root->left==NULL && root->right!=NULL){
                node* temp=root->right;
                delete root;
                return temp;
            }
            // 2 child
            node* change=root->right;
            while(change->left!=NULL){
                change=change->left;
            }
            root->data=change->data;
            root->right=deletenode(root->right,change->data);
            return root;
   }
   else if(data>root->data){
       root->right=deletenode(root->right,data);
       return root;
   }
   
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
   

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
        int m;
        cin>>m;
        int d;
        for(int i=0;i<m;i++){
            cin>>d;
           root=deletenode(root,d);
        }
        preorder(root);
        cout<<endl;
    }
}
