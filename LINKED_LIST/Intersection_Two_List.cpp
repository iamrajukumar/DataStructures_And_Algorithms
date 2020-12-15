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

node* findintersection(node* head1,node* head2){
    node *temp2=head2;
    node *ans=NULL;
    if(head1==NULL || head2==NULL)
        return ans;
    while(head1!=NULL){
        temp2=head2;
        while(temp2!=NULL){
            if(temp2->data==head1->data)
                return head1;
            temp2=temp2->next;
        }
        head1=head1->next;
    }
    return NULL;
}


int main() {
    node *head1=NULL;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        buildlist(head1,x);
    }
   // print(head1);
    node *head2=NULL;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        buildlist(head2,x);
    }
  //  print(head2);
    node* head=NULL;
    head=findintersection(head1,head2);
    if(head==NULL)
        cout<<-1<<endl;
    else
        cout<<head->data<<endl;

}
