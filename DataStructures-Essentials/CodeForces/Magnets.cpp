#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        int groups{0};
        char last;
        while(n--){
            cin >> s;
            if(groups == 0){
                last = s[1];
                groups++;
            }else{
                if(s[0]==last){
                    groups++;
                }
                last=s[1];
            }
        }
        cout << groups << "\n";
    }
}
