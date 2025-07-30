#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        string t;
        cin >> s;
        cin >> t;
        string res{"BBBBB\n"};
        for(int i=0;i<5;i++){
            if(s[i]==t[i])res[i]='G';
        }
        cout << res;
    }
}
