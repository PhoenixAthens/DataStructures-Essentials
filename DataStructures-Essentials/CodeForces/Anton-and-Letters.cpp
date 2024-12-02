#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    getline(cin,s);
    int letters[26]{0};
    for(char c: s)if(c>='a' && c<='z')letters[c-'a']=1;
    int cnt{0};
    for(int i: letters)if(i==1)cnt++;
    cout<<cnt<<"\n";
}
