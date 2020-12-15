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



int CalculateHeight(node* root){
    if(root==NULL)
        return 0;
    int ls=CalculateHeight(root->left);
    int rs=CalculateHeight(root->right);

    return max(ls+1,rs+1);
}

void printkthlevel(node *root,int k){
    if(root==NULL)
        return;
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
}




int main(){
    node* root=build_BST();
    //PreOrder(root);
    int h=CalculateHeight(root);
    for(int i=1;i<=h;i++){
        printkthlevel(root,i);
        cout<<endl;
    }
}



