#include <iostream>
using namespace std;

class Node{
    public:
    int elem;
    Node* next;
    Node(int e){
        elem = e;
        next = NULL;
    }
};

class SLL{
    private:
    Node* head;
    Node* tail;
    int size;

    public:
    SLL(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertFirst(int val){
        Node* temp = new Node(val);
        if( head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertLast(int val){
         Node* temp = new Node(val);
        if( head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAt(int val, int pos){
        Node* temp = new Node(val);
        Node* current ;
        current = head;
        if (size == 0 ){
            insertFirst(val);
        }
        else if (pos == size)
        {
            insertLast(val);
        }
        else{
            for(int i = 0 ; i < pos-1 ; i++){
                current = current->next;
            }
            temp->next = current->next;
            current->next = temp;
        }
        size++;
    }

    void deleteFirst(){
        Node* temp = head;
        if(size == 0){
            cout<<"the list is empty"<<endl;
        }
        else{
            if(size == 1){
                head = NULL;
                tail = NULL;
                delete temp;
            }
            else{
                head = head->next;
                delete temp;
            }

        }
    }
    
    
    
};



int main()
{
  return 0;  
}
