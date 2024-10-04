#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;
using std::ios;
using std::min;

#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

class CustomStack {
    int* arrPointer;
    int size;
    int end;
public:
    CustomStack(int maxSize) {
        arrPointer = new int[maxSize];
        //arrPointer = (int*)malloc(sizeof(int)*maxSize);
        size=maxSize;
        end=0;
    }
    
    void push(int x) {
        if(end<size){
            *(arrPointer+end)=x;
            end++;
        }
    }
    
    int pop() {
        if(end==0){
            return -1;
        }
        end--;
        return *(arrPointer+end);
    }
    
    void increment(int k, int val) {
        int limit = min(k,end);
        for(int i=0;i<limit;i++){
            *(arrPointer+i)+=val;
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
