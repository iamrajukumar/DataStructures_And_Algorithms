#include <bits/stdc++.h>
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

node* buildtree(string s){
    if(s=="false"){
        return NULL;
    }
    int d;
    cin>>d;
    node* root=new node(d);
    string l;
    cin>>l;
    root->left=buildtree(l);
    string r;
    cin>>r;
    root->right=buildtree(r);
    return root;
}

int calculateheight(node* root){
    if(root==NULL)
        return 0;
    int ls=calculateheight(root->left);
    int rs=calculateheight(root->right);
    return max(ls+1,rs+1);
}

void printodd(node* root,int k){
    if(root==NULL)
        return;
    if(k==1){
        cout<<root->data<<" ";
    }
    printodd(root->left,k-1);
    printodd(root->right,k-1);
}

void printeven(node* root,int k){
    if(root==NULL)
        return;
    if(k==1){
        cout<<root->data<<" ";
    }
    printeven(root->right,k-1);
    printeven(root->left,k-1);
}

int main() {
    node *root=buildtree("true");
    int h=calculateheight(root);
    for(int i=1;i<=h;i++){
        if(i%2!=0){
            printodd(root,i);
        }
        else{
            printeven(root,i);
        }
    }
}
