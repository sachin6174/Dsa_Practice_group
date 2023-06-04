#include<bits/stdc++.h>
using namespace std;

template <class t> class LinkedListNode{
    public:
        t data;
        LinkedListNode *next_address; //(LinkedListNode<t>* next_address;)

        LinkedListNode(){
            // default constructor
        }
        LinkedListNode(t data){
            this->data=data;
            this->next_address=NULL;
        }
        LinkedListNode(t data,LinkedListNode<t>*next_address){
            this->data=data;
            this->next_address=next_address;
        }
};


/*********************************************Linked List Iterative***************************************************/
// convention :
// camelcase for functions
// pascal case for Class
// snake case for normal variables


// take input linked list
LinkedListNode<int>* inputOfLinkedListI(){
    int data;
    cin>>data;
    LinkedListNode<int> * head=NULL;
    LinkedListNode<int>* tail=NULL;

    while (data != -1){
        LinkedListNode<int>* current_node =new LinkedListNode<int>(data);
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


//print the linked list
void printOfLinkedListI(LinkedListNode<int>*head){
    // here we lost head -> so make sure that save a copy of head in ll
    LinkedListNode<int> *head_copy = head;
    while(head!=NULL){
        cout<< head->data<<" ";
        head=head->next_address;
    }
    cout << endl;
}


//print the linked list GUI
void printOfLinkedListGUII(LinkedListNode<int>*head){
    // here we lost head -> so make sure that save a copy of head in ll
    LinkedListNode<int> *head_copy = head;
    cout<<"Head"<<"("<<head<<") ->";
    // NULL WILL BE PRINTED as zero

    
    while(head!=NULL){
        cout<<"||"<< head->data<<"-"<<head->next_address<<"||"<< " -> ";
        head=head->next_address;
    }
    cout << endl;
}


//print leave pattern
void printLeaveAlternateI(LinkedListNode<int>*head){
    while(head !=NULL){
        cout<<head->data<< " ";
        if (head->next_address != NULL && head->next_address->next_address != NULL){
            head=head->next_address->next_address;
        }
        else{
            break;
        }
    }
    cout<<endl;
}


// leave print pattern
void leavePrintAlternateI(LinkedListNode<int> *head){
    if(head!=NULL){
        head=head->next_address;
    }
    printLeaveAlternateI(head);
    cout<<endl;
}


//give address of the first  node having given dta
LinkedListNode<int> *addressOfDataI(LinkedListNode<int> *head, int data){

    while(head!=NULL){
        if(head->data==data){
            return head;
        }
        head=head->next_address;
    }
    return NULL;
}

//give address of the node at particular index
LinkedListNode<int> *addressOfIndexI(LinkedListNode<int> *head,int index){
    //considering index from 0
    int counter=0;
    while(head!=NULL){
        if(counter==index){
            return head;
        }
        head=head->next_address;
        counter++;
    }
    return NULL;
}

// swap two nodes
void swapNodesI(LinkedListNode<int>* head,int first_index ,int second_index){
    // validate indexes

    //here index are valid
    LinkedListNode<int> *first_node=addressOfIndexI(head,first_index);
    LinkedListNode<int> *second_node = addressOfIndexI(head,second_index);

    LinkedListNode<int> *first_node_pre = NULL;
    LinkedListNode<int>* first_node_post=NULL;

    LinkedListNode<int>* second_node_pre=NULL;
    LinkedListNode<int>* second_node_post=NULL;
   
}

LinkedListNode<int> *reverseOfLinkedListI(LinkedListNode<int> *head){

    if(head==NULL){
        return NULL;
    }
    stack<LinkedListNode<int> *> address;
    while(head!=NULL){
        address.push(head);
        head=head->next_address;
    }

    LinkedListNode<int> *ans = address.top();
    LinkedListNode<int> *ans_temp = address.top();
    address.pop();

    while(address.size()>=0){
        ans_temp->next_address=address.top();
        ans_temp = address.top();
        address.pop();
    }
    ans_temp->next_address=NULL;
    return ans;
}


void deletionOfLastNode(LinkedListNode<int>*head){
    while(head->next_address!=NULL){
        head=head->next_address;
    }
    delete head;
}


void deletionOfLinkedList(LinkedListNode<int>*head){
    while(head!=NULL){
        // LinkedListNode<int> *temp_head;
        // while(temp_head->next_address!=NULL){
        //     temp_head=temp_head->next_address;
        // }
        // delete temp_head;
        deletionOfLastNode(head);
    }
}
/*********************************************Linked List Recursion***************************************************/
// convention :
// camelcase for functions
// pascal case for Class
// snake case for normal variables


// take input linked list
LinkedListNode<int> *inputOfLinkedListR(){
    return NULL;
}

// print the linked list
void printOfLinkedListR(LinkedListNode<int>*head){
    return ;
}





int lengthOfLinkedListR(LinkedListNode<int> *head ){
    if(head==NULL){
        return 0;
    }
    return 1+ lengthOfLinkedListR(head->next_address);
}


// will reverse original linked list
LinkedListNode<int> *reverseOfLinkedListR(LinkedListNode<int> *head, LinkedListNode<int>*  &ans_head){
    if (head == NULL){
        return head;
    }
    if(head->next_address==NULL){
        ans_head=head;
        return head; 
    }
    LinkedListNode<int>* current =head;
    LinkedListNode<int>* next= head->next_address;
    head->next_address = NULL;
    LinkedListNode<int> *ans = reverseOfLinkedListR(next, ans_head);
    ans->next_address=current;
    return current;
}
LinkedListNode<int> *reverseOfLinkedListR(LinkedListNode<int> *head){
    LinkedListNode<int> * ans_head=NULL;
    reverseOfLinkedListR(head, ans_head);
    return ans_head;
}


void reversePrintOfLinkedListR(LinkedListNode<int> *head){
    if(head == NULL){
        return;
    }
    reversePrintOfLinkedListR(head->next_address);
    cout<<head->data<<" ";
}

/*********************************************Driver Code***************************************************/
// convention :
// camelcase for functions
// pascal case for Class
// snake case for normal variables


// int main(){

//     // hard making of linked list
//     // LinkedListNode<int> node1(1);
//     // LinkedListNode<int>* head_hardcode =&node1;
//     // LinkedListNode<int> node2(2);
//     // node1.next_address =&node2;
//     // LinkedListNode<int> node3(3);
//     // node2.next_address =&node3;

//     /*
//     1 2 3 4 5 6 7 -1
//     */
//     cout<<"LinkedList input:"<< endl;
//     LinkedListNode<int> *head = inputOfLinkedListI();
//     cout << endl<< endl;

//     cout << "linked list printed:" << endl;
//     printOfLinkedListI(head);
//     cout<<endl<<endl;

//     cout << "linked list GUI printed:" << endl;
//     printOfLinkedListGUII(head);
//     cout<<endl<<endl;

//     // cout << "print leave pattern:" << endl;
//     // printLeaveAlternateI(head);
//     // cout<<endl<<endl;

//     // cout << "leave print pattern:" << endl;
//     // leavePrintAlternateI(head);
//     // cout<<endl<<endl;

//     // cout << "length Of LinkedList:" << endl;
//     // cout << lengthOfLinkedListR(head);
//     // cout << endl<<endl;

//     // cout << "Linked list reversed:" << endl;
//     // printOfLinkedListI(reverseOfLinkedListR(head));
//     // cout<<endl<<endl;

//     cout << "address of particular index :" << endl;
//     cout << addressOfIndexI(head,4);
//     cout << endl<< endl;

//     cout << "address of particular data :" << endl;
//     cout << addressOfDataI(head,4);
//     cout << endl<< endl;


// }