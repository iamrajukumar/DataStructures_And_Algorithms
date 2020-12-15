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
        cout<<(head->data)<<" ";
        head=head->next;
    }
    cout<<endl;
}

void sortedinsert(node* &sorted,node* n){
  //  node *current;
    if(sorted==NULL || (sorted->data)>(n->data)){
        n->next=sorted;
        sorted=n;
    }
    else{
        node *current=sorted;
        while(current->next!=NULL && current->next->data < n->data){
            current=current->next;
        }
        n->next=current->next;
        current->next=n;
    }
}



void insertionsort(node* &head){
    node* current=head;
    node* sorted=NULL;
    while(current!=NULL){
        node *next=current->next;
        sortedinsert(sorted,current);
        current=next;
    }
    head=sorted;
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
        
  //  print(head);
    insertionsort(head);
    print(head);
   
}
