#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next=NULL;
        node(int x){
            data=x;
        }
};

void buildlist(node* &head,int x){
    node* n=new node(x);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;    
}

void print(node* head){
    while(head!=NULL){
        cout<<(head->data)<<"->";
        head=head->next;
    }
    cout<<endl;
}

void reverselist(node* head){
    node *temp=NULL;
    node *prev=NULL;

    while(head!=NULL){
        temp=head;
        head=head->next;
        temp->next=prev;
        prev=temp;   
    }
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
}

void reverse_recursion(node* head,node* &temp,node* &prev){
    if(head==NULL)
        return;
    temp=head;
    head=head->next;
    temp->next=prev;
    prev=temp;
    reverse_recursion(head,temp,prev);
}


int main() {
    node *head=NULL;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        buildlist(head,x);
    }
    print(head);
   // reverselist(head);
    node* temp=NULL,*prev=NULL;
    reverse_recursion(head,temp,prev);
    print(temp);
}
