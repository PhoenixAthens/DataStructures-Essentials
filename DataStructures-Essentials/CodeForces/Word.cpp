#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::transform;
int main(){
    string s;
    cin >> s;
    int up{0}, low{0};
    for(char c:s){
        if(c>=65 && c<=90)up++;
        else low++;
    }
    if(up>low){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout << s <<"\n";
}
