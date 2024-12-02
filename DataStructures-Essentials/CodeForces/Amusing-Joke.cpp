#include <iostream>
using std::cout;
using std::string;
using std::cin;
int main(){
    string s;
    int chars[26]{0};
    for(int i=0;i<2;i++){
        cin >> s;
        for(char c:s){
            chars[c-'A']++;
        }
    }
    cin >> s;
    for(char c:s){
        chars[c-'A']--;
    }
    bool flag=true;
    for(int i: chars){
        if(i!=0){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
}
