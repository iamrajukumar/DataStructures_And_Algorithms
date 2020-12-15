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

node* merge(node *head1,node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    int x=head1->data;
    int y=head2->data;
    node *result=NULL;
    if(x>=y){
        result=head2;
        result->next=merge(head1,head2->next);
    }
    else{
        result=head1;
        result->next=merge(head1->next,head2);
    }
    return result;
}

node* mergesort(node* head){
    
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
    head=mergesort(head);

}
