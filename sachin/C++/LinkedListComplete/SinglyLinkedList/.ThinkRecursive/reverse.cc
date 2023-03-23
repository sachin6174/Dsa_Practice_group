#include<iostream>
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

LinkedListNode<int> *reverse(LinkedListNode<int>*head,LinkedListNode<int>*tail){

    LinkedListNode <int>*ans=reverse(head->next_address,tail);
}

int main(){



}