#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::swap;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        swap(s[0],s[4]);
        cout << s << "\n";
    }
}
