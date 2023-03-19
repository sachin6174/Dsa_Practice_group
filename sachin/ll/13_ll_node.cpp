#include<bits/stdc++.h>
using namespace std;
/*
1 2 3 4 5 6 7 8 9 -1
*/
template<class p>
class linked_list_node{
    public:
    p data;
    linked_list_node* next_address;

    linked_list_node(p data){
        this->data=data;
        this->next_address=NULL;
    }
};

linked_list_node<int>* ll_input(){
    int data;
    cin>>data;
    linked_list_node<int> * head=NULL;
    linked_list_node<int>* tail=NULL;

    while (data != -1){
        
        linked_list_node<int>* current_node =new linked_list_node<int>(data);
        if(head==NULL){
            head =current_node;
            tail =current_node;
        }else{
            // dont touch head 
            tail->next_address=current_node;// linking 
            tail =current_node;// updtaing tail
        }
        cin>>data;
    }
    return head;
}

void ll_print(linked_list_node<int>*head)
{
    // here we lost head -> so make sure that save a copy of head in ll
    linked_list_node<int> *head_copy = head;
    while(head!=NULL){
        cout<< head->data<<" ";
        head=head->next_address;
    }
    cout << endl;
}


//print leave pattern
void print_alternate(linked_list_node<int>*head){
    while(head !=NULL){
        cout<<head->data<< " ";
        if (head->next_address != NULL && head->next_address->next_address != NULL)
        {
            head=head->next_address->next_address;
        }
        else
        {
            break;
        }
    }
    cout<<endl;
}


// leave print
void print_alternate2(linked_list_node<int> *head){
    if(head!=NULL){
        head=head->next_address;
    }
    print_alternate(head);
}



/*********************************************Linked List Recursion***************************************************/
//convention -> camelcase for functions
//pascal case for objects



int lengthOfLinkedList(linked_list_node<int> *head ){
    if(head==NULL){
        return 0;
    }
    return 1+ lengthOfLinkedList(head->next_address);
}

// will reverse original linked list
linked_list_node<int> *reverseOfLinkedList(linked_list_node<int> *head, linked_list_node<int>*  &ans_head)
{
    if (head == NULL){
        return head;
    }
    if(head->next_address==NULL){
        ans_head=head;
        cout << "last " << ans_head<<endl;
        return head; 
    }
    linked_list_node<int>* current =head;
    linked_list_node<int>* next= head->next_address;
    head->next_address = NULL;
    cout<<"UP->   calling "<<" current "<<current<<" next "<<next<<endl;
    linked_list_node<int> *ans = reverseOfLinkedList(next, ans_head);
    ans->next_address=current;
    cout << "DN->   calling "<< " current " << current << " next " << next << endl;
    return current;
}
linked_list_node<int> *reverseOfLinkedList(linked_list_node<int> *head){
    linked_list_node<int> * ans_head=NULL;
    reverseOfLinkedList(head, ans_head);
    return ans_head;
}




int main(){

    // linked_list_node<int> node1(1);
    // linked_list_node<int>* head =&node1;
    // linked_list_node<int> node2(2);
    // node1.next_address =&node2;
    // linked_list_node<int> node3(3);
    // node2.next_address =&node3;

    cout << "Linke" << endl;
    linked_list_node<int> *head = ll_input();

    ll_print(head);
    print_alternate(head);
    print_alternate2(head);

    cout << endl;
    cout << "lengthOfLinkedList:" << endl;
    cout << lengthOfLinkedList(head);
    cout << endl;

    
    ll_print(reverseOfLinkedList(head));
    cout<<endl;
}