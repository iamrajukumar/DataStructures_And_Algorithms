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

void findmidpoint(node* head){
    node *fast=head->next,*slow=head;
    while(fast->next!=NULL && fast!=NULL){
        fast=(fast->next)->next;
        slow=slow->next;
    }
    cout<<slow->data<<endl;
}

void find_k_from_last(node* head,int k){
    node *temp=head;
    for(int i=1;i<=k;i++){
        temp=temp->next;
    }
    while(temp!=NULL){
        temp=temp->next;
        head=head->next;
    }
    cout<<head->data<<endl;
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
    findmidpoint(head);
    find_k_from_last(head,3);

}
