#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    int cnt{0};
    for(int i=1;i<s.size();i++){
        if(s[i]=='-'){
            cnt++;
        }else if(s[i]=='|'){
            cout << cnt << " ";
            cnt = 0;
        }
    }
    cout << "\n";
}
