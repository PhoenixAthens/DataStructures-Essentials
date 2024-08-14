#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;

class Node{
public:
    int data;
    Node* nextNode;
    Node(void):data(0),nextNode(nullptr){}
    Node(int value):data(value),nextNode(nullptr){}
    Node(int value, Node* next):data(value),nextNode(next){}
    
};

class LinkedList {
public:
    int lengthSoFar;
    Node head;
    Node tail;
    LinkedList() {
        this->tail = Node();
        this->head = Node();
        this->head.nextNode = &tail;
        lengthSoFar++;
    }

    int get(int index) {
        if(index>=lengthSoFar){
            return -1;
        }else{
            Node* headTemp = &head;
            int current = 0;
            while(current<index){
                headTemp = headTemp->nextNode;
                current++;
            }
            return headTemp->data;
        }
    }

    void insertHead(int val) {
        Node newNode = Node(val,&head);
        head = newNode;
        lengthSoFar++;
    }
    
    void insertTail(int val) {
        Node* headTemp = &head;
        while(headTemp->nextNode!=&tail){
            headTemp=headTemp->nextNode;
        }
        Node newNode = Node(val,&tail);
        headTemp->nextNode = &newNode;
        lengthSoFar++;
    }

    bool remove(int index) {
        if(index>=lengthSoFar){
            return false;
        }else{
            Node* headTemp = &head;
            int current = 0;
            while(current<index-1){
                headTemp = headTemp->nextNode;
                current++;
            }
            headTemp->nextNode= headTemp->nextNode->nextNode;
            return true;
        }
    }

    vector<int> getValues() {
        vector<int> returnMe(lengthSoFar);
        Node* temp = &head;
        int current = 0;
        while(current<lengthSoFar){
            returnMe.push_back(temp->data);
            temp = temp->nextNode;
        }
        return returnMe;
    }
};

