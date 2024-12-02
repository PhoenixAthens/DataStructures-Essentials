#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int len, days;
    cin >> len >> days;
    string s;
    cin >> s;
    int empty{0};
    for(char c: s){
        if(c=='.')empty++;
    }
    if(empty==len)cout<<empty<<"\n";
    else cout<<empty+days <<"\n";
}
