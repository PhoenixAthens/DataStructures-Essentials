#include <array>
#include <iostream>
using std::array;
using std::cout;
class Node{
public:
    array<int,2> root;
    Node* left;
    Node* right;
    Node(){
        root = {0,0};
        left = nullptr;
        right = nullptr;
    }
};
class MyCalendar {
    Node* base;
public:
    MyCalendar() {
        base = new Node();
    }
    bool insert(array<int,2> p, Node* roots){
        if(p[1] <= roots->root[0]){
            if(roots->left == nullptr){
                roots->left = new Node;
                roots->left->root[0]=p[0];
                roots->left->root[1]=p[1];
                return true;
            }
            else return insert(p,roots->left);
        }else if(p[0] >= roots->root[1]){
            if(roots->right == nullptr){
                roots->right = new Node;
                roots->right->root[0]=p[0];
                roots->right->root[1]=p[1];
                return true;
            }
            else return insert(p,roots->right);
        }else{
            return false;
        }
    }
    bool book(int start, int end) {
        Node* tempBase = base;
        if(tempBase->root[0]==0 && tempBase->root[1]==0){
            tempBase->root[0]=start;
            tempBase->root[1]=end;
            return true;
        }
        array<int,2> p{start,end};
        return insert(p, tempBase);
    }
};

int main(int argc, char** argv){
    MyCalendar m;
    cout << m.book(47,50) << "\n";
    cout << m.book(33,41) << "\n";
    cout << m.book(39,45) << "\n";
    cout << m.book(33,42) << "\n";
    cout << m.book(25,32) << "\n";
    cout << m.book(26,35) << "\n";
    cout << m.book(19,25) << "\n";
    cout << m.book(3,8) << "\n";
    cout << m.book(8,13) << "\n";
    cout << m.book(18,27) << "\n";
    
    
}
//[47,50],[33,41],[39,45],[33,42],[25,32],[26,35],[19,25],[3,8],[8,13],[18,27]]
