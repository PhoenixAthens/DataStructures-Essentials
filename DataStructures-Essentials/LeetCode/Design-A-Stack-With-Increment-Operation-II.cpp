#include <list>
#include <iostream>
using std::cout;
using std::cin;
using std::ios;
using std::min;
using std::list;

#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

class CustomStack {
    list<int> stack;
    int size;
public:
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(stack.size()<size){
            stack.push_back(x);
        }
    }
    
    int pop() {
        if(stack.empty())return -1;
        int topElement = stack.back();
        stack.pop_back();
        return topElement;
    }
    
    void increment(int k, int val) {
        int limit = min((int)stack.size(),k);
        list<int>::iterator it=stack.begin();
        for(int i=0;i<limit;i++){
            *it+=val;
            it++;
        }
//        if(k<=end){
//            for(int i=0;i<k;i++){
//                *(arrPointer+i)+=val;
//            }
//        }else{
//            for(int i=0;i<end;i++){
//                *(arrPointer+i)+=val;
//            }
//        }
    }
};
