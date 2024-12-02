#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n,d;
    cin >> n >> d;
    string s;
    cin >> s;
    int i=n-1;
    while(d>0){
        if(s[i]=='@'){
            s[i]='.';
            d--;
        }
        i--;
    }
    cout << s << "\n";
}
