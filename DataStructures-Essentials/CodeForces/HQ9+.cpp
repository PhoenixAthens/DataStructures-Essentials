#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    for(auto c: s){
        if(c=='H'||c=='Q'||c=='9'){
            cout<<"YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
