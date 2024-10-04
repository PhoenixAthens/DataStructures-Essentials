#include <iostream>
#include <unordered_map>
using std::cout;
using std::cin;
using std::ios;
using std::unordered_map;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

int divideIt(long long n, int count){
    if(n==1){
        return count;
    }
    if(n%2!=0 && n%3!=0 && n%5!=0){
        return -1;
    }
    if(n%2==0){
        n/=2;
        count++;
    }
    if(n%3==0){
        n=(n/3)*2;
        count++;
    }
    if(n%5==0){
        n=(n/5)*4;
        count++;
    }
    return divideIt(n,count);
}
int main(int argc, char** argv){
    int total{0};
    long long inputValue{0};
    unordered_map<long long, int> mapOfValues;
    cin >> total;
    while(total>0){
        cin >> inputValue;
        if(mapOfValues.contains(inputValue)){
            cout << mapOfValues[inputValue] << "\n";
        }else{
            int result = divideIt(inputValue, 0);
            mapOfValues[inputValue]=result;
            cout << result << "\n";
        }
        total--;
    }
    return 0;
}
