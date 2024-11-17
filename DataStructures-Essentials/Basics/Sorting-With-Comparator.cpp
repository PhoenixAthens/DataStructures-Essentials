#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::sort;
using std::greater;

template <class T>
bool increase(T a, T b){
    return a<=b;
}

template <class T>
bool decrease(T a, T b){
    return a>=b;
}

vector<int> sortingWithComparator(vector<int> a, bool flag){
    if(flag){
        sort(a.begin(),a.end(),increase<int>);
    }else{
        sort(a.begin(),a.end(),decrease<int>);
    }
    return a;
}

//using library functions
vector<int> sortingWithComparator_2(vector<int> a, bool flag){
    if(flag){
        sort(a.begin(),a.end());
    }else{
        sort(a.begin(),a.end(),greater<int>());
    }
    return a;
}

