#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n;
    cin >> n;
    string result;
    bool flag=true;
    while(n--){
        if(flag){
            result.push_back('I');
            result.push_back(' ');
            result.push_back('h');
            result.push_back('a');
            result.push_back('t');
            result.push_back('e');
            result.push_back(' ');
            flag=false;
        }else{
            result.push_back('I');
            result.push_back(' ');
            result.push_back('l');
            result.push_back('o');
            result.push_back('v');
            result.push_back('e');
            result.push_back(' ');
            flag=true;
        }
        if(n!=0){
            result.push_back('t');
            result.push_back('h');
            result.push_back('a');
            result.push_back('t');
            result.push_back(' ');
        }
    }
    result.push_back('i');
    result.push_back('t');
    cout << result << "\n";
}
