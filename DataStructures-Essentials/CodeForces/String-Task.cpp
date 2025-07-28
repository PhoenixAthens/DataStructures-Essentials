#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::vector;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string input;
    cin >> input;
    string store;
    for(char c: input){
        char present = tolower(c);
        if(present!='a' && present!='i' && present!='e' && present!='o' && present!='u' && present!='y'){
            store.push_back('.');
            store.push_back(present);
        }
    }
    cout << store << "\n";
}
