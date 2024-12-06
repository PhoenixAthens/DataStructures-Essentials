#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    int l{0};
    int r = s.size()-1;
    bool flag = true;
    while(l<=r){
        if(s[l]==s[r]){
            r--;
            l++;
        }else{
            flag=false;
            break;
        }
    }
    if(flag)cout<<1<<"\n";
    else cout<<0<<"\n";
    
}
