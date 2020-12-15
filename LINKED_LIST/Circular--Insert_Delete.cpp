#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next=NULL;
    node(int data){
        this->data=data;
    }
};


// INSERTION AT HEAD
void buildlist(node* &head,int data){
    node *n=new node(data);
    n->next=head;
    node *temp=head;
    if(head==NULL){
        n->next=n;
    }
    else{
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=n;
    }
    head=n;
}

void print(node *head){
 //   cout<<"hello"<<endl;
    node *temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;
}

// get node having value k
node* getnode(node *&head,int k){
    node *temp=head;
    while(temp->next!=head){
        if(temp->data==k)
            return temp;
        temp=temp->next;
    }
    if(temp->data==k)
        return temp;
    return NULL;
}

    // delete node
void deletion(node* &head,int k){
    node *del=getnode(head,k);  
    node *temp=head;
    if(head==del){
        head=head->next;
    }
    else{
        while(temp->next!=del){
            temp=temp->next;
        }
        temp->next=del->next;

    }
   
}

int main(){
    int x;
    node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        buildlist(head,x);
    }
    print(head);

    //deletion
    int k;
    cin>>k;
    deletion(head,k);
    print(head);
}