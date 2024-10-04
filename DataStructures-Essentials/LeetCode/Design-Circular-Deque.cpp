#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;
using std::ios;

#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

class MyCircularDeque {
private:
    int* arr;
    int start;
    int end;
    int size;
public:
    MyCircularDeque(int k) {
        arr = (int*)malloc(sizeof(int)*k);
        start = 0;
        end = k-1;
        size = k;
    }
    
    bool insertFront(int value) {
        if(end<0)return false;
        *(arr+end)=value;
        end--;
        return true;
    }
    
    bool insertLast(int value) {
        if(end<0)return false;
        else if(end==size-1){
            *(arr+end)=value;
            end--;
            return true;
        }
        for(int i=end+1;i<size;i++){
            *(arr+i-1)=*(arr+i);
        }
        end--;
        *(arr+size-1)=value;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())return false;
        end++;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())return false;
        for(int i=size-2;i>end;i--){
            *(arr+i+1)=*(arr+i);
        }
        end++;
        return true;
    }
    
    int getFront() {
        if(isEmpty())return -1;
        return *(arr+end+1);
    }
    
    int getRear() {
        if(isEmpty())return -1;
        return *(arr+size-1);
    }
    
    bool isEmpty() {
        if(end==size-1)return true;
        return false;
    }
    
    bool isFull() {
        if(end<0)return true;
        return false;
    }
};

int main(int argc, char** argv){
//    MyCircularDeque myD(3);
//    std::cout << myD.insertLast(1) << "\n";
//    std::cout << myD.insertLast(2) << "\n";
//    std::cout << myD.insertFront(3) << "\n";
//    std::cout << myD.insertFront(4) << "\n";
//    std::cout << myD.getRear() << "\n";
//    std::cout << myD.isFull() << "\n";
//    std::cout << myD.deleteLast() << "\n";
//    std::cout << myD.insertFront(4) << "\n";
//    std::cout << myD.getFront() << "\n";
//    
    MyCircularDeque myD(4);
    std::cout << myD.insertFront(9) << "\n";
    std::cout << myD.deleteLast() << "\n";
    std::cout << myD.getRear() << "\n";
    std::cout << myD.getFront() << "\n";
    std::cout << myD.getFront() << "\n";
    std::cout << myD.deleteFront() << "\n";
    std::cout << myD.insertFront(6) << "\n";
    std::cout << myD.insertLast(5) << "\n";
    std::cout << myD.insertFront(9) << "\n";
    std::cout << myD.getFront() << "\n";
    std::cout << myD.insertFront(6)<< "\n";
}


//["MyCircularDeque","insertLast","insertLast","insertFront","insertFront","getRear","isFull","deleteLast","insertFront","getFront"]
//[[3],[1],[2],[3],[4],[],[],[],[4],[]]

//["MyCircularDeque","insertFront","deleteLast","getRear","getFront","getFront","deleteFront","insertFront","insertLast","insertFront","getFront","insertFront"]

// [[4],[9],[],[],[],[],[],[6],[5],[9],[],[6]]
