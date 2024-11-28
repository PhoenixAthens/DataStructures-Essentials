#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt{0};
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1])cnt++;
    }
    cout << cnt << "\n";
}
