#include <iostream>
#include <unordered_set>
using std::cout;
using std::cin;
using std::string;
using std::unordered_set;
int main(){
    string s;
    cin >> s;
    unordered_set<char> setDi;
    for(char c:s){
        setDi.insert(c);
    }
    if(setDi.size()%2==0)cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    
}
