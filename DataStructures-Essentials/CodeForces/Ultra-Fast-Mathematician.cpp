#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int n = s1.size();
    for(int i=0;i<n;i++)s1[i]='0'+(s1[i]^s2[i]);
    cout<<s1<<"\n";
}
