#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::min;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    string s;
    cin >> s;
    int rotations{0};
    char current ='a';
    for(char c:s){
        int count = abs(current-c);
        if(count>13)count=26-count;
        rotations+=count;
        current=c;
        
    }
    cout<<rotations<<"\n";
}
