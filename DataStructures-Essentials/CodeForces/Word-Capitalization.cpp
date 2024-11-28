#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    s[0]=toupper(s[0]);
    cout << s << "\n";
}
