template <typename t> class DoubleLinkedListNode{
    public:
        T data;
        DoubleLinkedListNode<T> *left_address;
        DoubleLinkedListNode<T> *right_address;

        DoubleLinkedListNode(){
            // default constructor
        }

        DoubleLinkedListNode(T data){
            this->data=data;
        }
        DoubleLinkedListNode(DoubleLinkedListNode<T> *left_address,T data,DoubleLinkedListNode<T> *right_address){
            this->data=data;
            this->left_address=left_address;
            this->right_address=right_address;
        }

        //take input

        template<typename t>static inputOfDoubleLinkedList(){
            
        }

};
