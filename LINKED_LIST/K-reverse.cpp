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

node* reverselist(node* &head,int j){
    node* prev=NULL;
    node* temp=NULL;
    while(j--){
        temp=head;
        head=head->next;
        temp->next=prev;
        prev=temp;   
    }
    return temp;
}

void addnode(node* &head,node* res){
    if(head==NULL){
        head=res;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=res;
}




int main() {
    node *head=NULL;
    int n,k;
    cin>>n>>k;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        buildlist(head,x);
    }
   // print(head);
   // reverselist(head);
   int count=n/k;
   node* ans=NULL;

   while(count--){
   node* res=reverselist(head,k);
   addnode(ans,res);
   }
    
    print(ans);
    
        


}
