#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    int result[26];
    for(int& i:result)i=-1;
    for(int i=0;i<s.size();i++){
        if(result[s[i]-'a']==-1){
            result[s[i]-'a']=i;
        }
    }
    for(int i: result)cout<<i<<" ";
    cout<<"\n";
}
