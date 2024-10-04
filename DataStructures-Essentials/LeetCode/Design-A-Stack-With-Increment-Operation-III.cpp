#include <iostream>
#include <cstdlib>
#include <vector>
using std::cout;
using std::cin;
using std::ios;
using std::min;
using std::vector;

#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

class CustomStack {
    vector<int> arr;
    int end;
    int size;
    vector<int> incrementArray;
public:
    CustomStack(int maxSize) {
        arr.resize(maxSize);
        incrementArray.resize(maxSize);
        end = -1;
        size = maxSize;
    }
    
    void push(int x) {
        if(end<size-1){
            arr[++end]=x;
        }
    }
    
    int pop() {
        if(end<0)return -1;
        int res = arr[end] + incrementArray[end];
        if(end>0){
            incrementArray[end-1] += incrementArray[end];
        }
        incrementArray[end] = 0;
        end--;
        return res;
    }
    
    void increment(int k, int val) {
        if(end>=0){
            if(k-1 < end){
            incrementArray[k-1]+=val;
            }else{
            incrementArray[end]+=val;
        }
        }
    }
};
