#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int cals{0};
    for(char c: s){
        if(c=='1')cals+=a1;
        else if(c=='2')cals+=a2;
        else if(c=='3')cals+=a3;
        else cals+=a4;
    }
    cout << cals << "\n";
}
