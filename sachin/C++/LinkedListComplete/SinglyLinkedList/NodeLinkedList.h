template <class t> class LinkedListNode{
    public:
        t data;
        LinkedListNode *next_address; //(LinkedListNode<t>* next_address;) is specific but it implicit so we can avoid this here it will work fine(no need to tell explicitly)

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

        // take input linked list
        template <class t> static LinkedListNode<int>* inputOfLinkedListI(){
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
};

// a class file can also have extension of .h and can be imported as "name_of_file"

