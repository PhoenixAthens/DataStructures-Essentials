#include <cmath>
#include <algorithm>
#include <iostream>
using std::pow;
using std::swap;
using std::cout;
long reverseBits(long n) {
    int arr[32]{0};
    while(n!=0){
        int val = log2(n);
        arr[31-val]=1;
        n-=(int)pow(2,val);
    }
    int j=0; 
    for(int i=31;i>=16;i--){
        swap(arr[i],arr[j++]);
    }
    long res{0};
    j = 31;
    for(int i=0;i<32;i++){
        if(arr[i]==1)res+=(long)pow(2,j);
        j--;
    }
    return res;
}
int main(int argc, char** argv){
    cout << reverseBits(0) <<"\n";
    cout << reverseBits(12) <<"\n";
    cout << reverseBits(6) <<"\n";
    cout << reverseBits(4) <<"\n";
}
