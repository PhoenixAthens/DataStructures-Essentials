#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    int len;
    string s;
    while(t--){
        cin >> len;
        cin >> s;
        for(char& c: s){
            if(c=='A')c='T';
            else if(c=='T')c='A';
            else if(c=='C')c='G';
            else c='C';
        }
        cout << s << "\n";
    }
}
