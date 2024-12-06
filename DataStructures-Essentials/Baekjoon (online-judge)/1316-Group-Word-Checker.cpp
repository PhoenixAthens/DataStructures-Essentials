#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    string s;
    int cnt{0};
    while(t--){
        cin >> s;
        int letters[26]{0};
        char last='\0';
        bool flag=true;
        for(char c: s){
            if(c!=last){
                if(letters[c-'a']>0){
                    flag = false;
                    break;
                }
                else{
                    last = c;
                    letters[c-'a']++;
                }
            }else{
                letters[c-'a']++;
            }
        }
        if(flag)cnt++;
    }
    cout << cnt << "\n";
}
