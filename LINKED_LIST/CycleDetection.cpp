
// CYCLE DETECTION (FLOYD'S ALGORITHM)
/*
node* cycledetection(node *head){
    node *slow=head;
    node *fast=head;

    while(fast->next!=NULL && fast!=NULL){
        slow=slow->next;
        fast=(fast->next)->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
*/