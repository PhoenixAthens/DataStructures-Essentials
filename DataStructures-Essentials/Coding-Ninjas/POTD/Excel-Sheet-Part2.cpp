#include <iostream>
#include <unordered_map>
using std::cout;
using std::cin;
using std::string;
using std::unordered_map;
long long titleToNumber(string str) {
    int i = str.size()-1;
    long long val{0};
    long long pow = 1;
    while(i>=0){
        val+=(str[i]-'A'+1)*pow;
        pow*=26;
        i--;
    }
    return val;
}
int main(){
    int tc;
    cin >> tc;
    while(tc>0){
        
        tc--;
    }
}
