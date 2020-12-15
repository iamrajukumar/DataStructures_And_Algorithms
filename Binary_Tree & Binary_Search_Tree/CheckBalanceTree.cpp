#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;
        node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};
node *build(string s){
    if(s=="true"){
        int d;
        cin>>d;
        node *root = new node(d);
        string l;
        cin>>l;
        if(l=="true"){
        root->left=build(l);
        }
        string r;
        cin>>r;
        if(r=="true"){
        root->right=build(r);
        }
        return root;
	}
	return NULL;
}
int isbalanced(node *root,bool flag){   
    if(root==NULL)
        return 0;
    
    int ls=isbalanced(root->left,flag);
    int rs=isbalanced(root->right,flag);
    int dif=abs(ls-rs);
    if(dif>1){
        flag=false;
    }
    return max(ls+1,rs+1);
}
int main() {
    node *root=build("true");    
    bool flag=true;
    int a=isbalanced(root,flag);
    if(flag)
        cout<<"true";
    else    
        cout<<"false";
    return 0;
}
