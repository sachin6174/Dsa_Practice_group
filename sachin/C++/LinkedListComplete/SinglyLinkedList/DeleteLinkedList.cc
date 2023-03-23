
#include"13_ll_node.cpp"


void deletionOfLastNodeI(LinkedListNode<int>*head){

    // one node
    if(head->next_address==NULL){
        delete head;
        return;
    }
    //more then one node
    while(head->next_address->next_address==NULL){
        LinkedListNode<int> *to_delete = head->next_address;
        head->next_address=NULL;
        delete to_delete;
        
    }

    delete head;
}
void deletionOfLinkedListI(LinkedListNode<int>*head){
    while(head!=NULL){
        deletionOfLastNodeI(head);
    }
}

void LastNodeR(LinkedListNode<int> *head)
{
    if(head==NULL){
        return ;
    }

    deletionOfLinkedListR(head->next_address);
    delete head;
}
void deletionOfLinkedListR(LinkedListNode<int>*head){
    if(head==NULL){
        return ;
    }

    deletionOfLinkedListR(head->next_address);
    delete head;
}

int main(){
    LinkedListNode<int>*head1=inputOfLinkedListI();
    LinkedListNode<int>*head2=inputOfLinkedListI();
    printOfLinkedListGUII(head1);
    printOfLinkedListGUII(head2);

    deletionOfLinkedListR(head1);
    deletionOfLinkedListI(head2);

    // tell me should i print a ll after deleting
}
/*
1 2 3 4 -1
456 547 5 -1
*/