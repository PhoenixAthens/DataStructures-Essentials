#include <unordered_set>
#include <unordered_map>
#include <string>
#include <iostream>
using std::unordered_set;
using std::string;
using std::unordered_map;
using std::ios_base;
using std::cin;
using std::cout;
class Node{
public:
    unordered_set<string> keys;
    Node* next;
    Node* prev;
    int freq;
    Node(int val){
        freq=val;
        next=nullptr;
        prev=nullptr;
    }
};
class AllOne{
    Node* head;
    Node* tail;
    unordered_map<string,Node*> mapOf;
public:
    AllOne(){
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        head = new Node(0);
        tail = new Node(0);
        head->next = tail;
        tail->prev = head;
    }
    void inc(string key){
        if(mapOf.find(key)!=mapOf.end()){
            Node* at = mapOf[key];
            at->keys.erase(key);
            
            Node* nextNode = at->next;
            if(nextNode->freq == at->freq+1){
                nextNode->keys.insert(key);
                mapOf[key]=at->next;
            }else{
                Node* newNode = new Node(at->freq+1);
                newNode->keys.insert(key);
                newNode->prev = at;
                at->next = newNode;
                newNode->next = nextNode;
                nextNode->prev = newNode;
                mapOf[key]=newNode;
            }
            if(at->keys.empty()){
                Node* prevNode = at->prev;
                nextNode = at->next;
                prevNode->next = nextNode;
                nextNode->prev = prevNode;
            }
        }else{
            if(head->next->freq==1){
                head->next->keys.insert(key);
                mapOf[key]=head->next;
            }else{
                Node* nextNode = head->next;
                Node* newNode = new Node(1);
                newNode->keys.insert(key);
                mapOf[key]=newNode;
                head->next=newNode;
                newNode->prev=head;
                newNode->next=nextNode;
                nextNode->prev=newNode;
            }
        }
    }
    void dec(string key){
        Node* at = mapOf[key];
        at->keys.erase(key);
        if(at->freq==1){
            mapOf.erase(key);
        }else{
            Node* prevNode = at->prev;
            if(at->prev->freq==at->freq-1){
                prevNode->keys.insert(key);
                mapOf[key]=at->prev;
            }else{
                Node* newNode = new Node(at->freq-1);
                newNode->keys.insert(key);
                mapOf[key]=newNode;
                prevNode->next = newNode;
                newNode->prev=prevNode;
                newNode->next=at;
                at->prev=newNode;
            }
        }
        if(at->keys.empty()){
            Node* prevNode = at->prev;
            Node* nextNode = at->next;
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
        }
    }
    string getMaxKey(){
        if(head->next==tail){
            return "";
        }else{
            return *(tail->prev->keys.begin());
        }
    }
    string getMinKey(){
        if(head->next==tail){
            return "";
        }else{
            return *(head->next->keys.begin());
        }
    }
};
int main(int argc, char** argv){
    AllOne a;
    a.inc("a");
    a.inc("b");
    a.inc("b");
    a.inc("b");
    a.inc("b");
    a.dec("b");
    a.dec("b");
    std::cout << a.getMaxKey() << "\n";
    std::cout << a.getMinKey() << "\n";
//    a.inc("leet");
//    std::cout << a.getMaxKey() << "\n";
//    std::cout << a.getMinKey() << "\n";
}
