#include <iostream>
#include <sstream>
using std::cout;
using std::cin;
using std::stringstream;
using std::string;
int main(){
    string s_w_s;
    getline(cin,s_w_s);
    stringstream a(s_w_s);
    string word;
    int count{0};
    while(a >> word){
        count++;
    }
    cout << count << "\n";
}
