#include <cmath>
#include <iostream>
#include <set>
#include <iterator>
#include <vector>
using std::sqrt;
using std::cin;
using std::cout;
using std::set;
using std::begin;
using std::end;
using std::vector;

int* printDivisors(int n, int &size){
    int start=0;
    int end = size-1;
    int* divisors = new int[size];
    int sq = sqrt(n);
    for(int i=1;i<=sq;i++){
        if(n%i==0)divisors[start++]=i;
        int quo = n/i;
        if(quo!=i)divisors[end--]=quo;
    }
    for(int i=0;i<size;i++){
        cout << *(divisors+i) << " ";
    }
    return divisors;
}
int* printDivisors_2(int n, int &size){
    set<int> setOfDivs;
    int sq = sqrt(n);
    for(int i=1;i<=sq;i++){
        if(n%i==0){
            setOfDivs.insert(i);
            setOfDivs.insert(n/i);
        }
    }
    int* divisors = new int[setOfDivs.size()];
    int j=0;
    for(int i: setOfDivs){
        divisors[j++]=i;
    }
    for(int i: setOfDivs){
        cout << i << " ";
    }
    return divisors;
}
int* printDivisors_3(int n, int &size){
    vector<int> vecOfDivs;
    int sq = sqrt(n);
    for(int i=1;i<=sq;i++){
        if(n%i==0){
            vecOfDivs.push_back(i);
        }
    }
    for(int i=sq-1;i>=1;i--){
        if(n%i==0){
            vecOfDivs.push_back(n/i);
        }
    }
    for(int i: vecOfDivs){
        cout << i << " ";
    }
    return 0;
}
int main(int argc, char** argv){
    int input = 10;
    int size = 4;
    int* forI = printDivisors_3(input,size);
    
}

