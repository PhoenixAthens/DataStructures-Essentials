#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    int si = s.size();
    for(int i=0;i<si;i++)
        if(s[i]=='.')cout<<0;
        else if(s[i]=='-' && s[i+1]=='.'){cout<<1;i++;}
        else if(s[i]=='-' && s[i+1]=='-'){cout<<2;i++;}
    cout<<"\n";
}
