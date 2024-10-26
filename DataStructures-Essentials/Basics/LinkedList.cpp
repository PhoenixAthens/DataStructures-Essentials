#include <iostream>
class Node{
public:
    int val;
    Node* nextNode;
    Node(int value):val(value),nextNode(nullptr){}
};
class LinkedList{
    Node* head{nullptr};
    Node* tail{nullptr};
public:
    void insertFront(int val){
        Node* newNode = new Node(val);
        newNode->nextNode=head;
        head = newNode;
    }
    void insertEnd_(int val){
        Node* newNode = new Node(val);
        Node* current = head;
        if(current==nullptr){
            head = newNode;
        }else{
            while(current->nextNode!=nullptr){
                current = current->nextNode;
            }
            current->nextNode = newNode;
        }
        
    }
    void insertEnd(int val){
        Node* nNode = new Node(val);
        if(head==nullptr){
            head = nNode;
            tail = nNode;
            return;
        }
        tail->nextNode = nNode;
        tail = nNode;
        
    }
    void insertAtKth(int val, int k){
        Node* newNode = new Node(val);
        Node* current = head;
        if(head==nullptr){
            head=newNode;
            return;
        }
        for(int i=1;i<k;i++){
            current = current -> nextNode;
        }
        newNode->nextNode = current->nextNode;
        current->nextNode = newNode;
    }
    void deleteNode(int value) {
        
        if (head -> val == value) {
            Node* targetNode = head;
            head = head -> nextNode;
            delete targetNode;
        } else {
            Node* iter = head;
            
            // Traverse the list
            // When next element is our target element, eliminate it
            while (iter -> nextNode != NULL) {
                if (iter -> nextNode -> val == value) {
                    iter -> nextNode = iter->nextNode->nextNode;
                    break;
                }
                iter = iter -> nextNode;
            }
        }
    }
    
    int getHeadValue(){
        if(head==nullptr){
            return -1;
        }else{
            return head->val;
        }
    }
    int getEndValue(){
        if(head==nullptr){
            return -1;
        }else{
            Node* current = head;
            while(current->nextNode != nullptr){
                current = current->nextNode;
            }
            return current->val;
        }
    }
};
int main(int argc, char** argv){
    LinkedList* list1 = new LinkedList();
    std::cout << list1->getHeadValue() <<"\n";
    list1->insertFront(23);
    std::cout << list1->getHeadValue() <<"\n";
}
