#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    int n;
    string s;
    while(t--){
        cin >> n;
        cin >> s;
        for(char c: s){
            for(int i=0;i<n;i++)cout<<c;
        }
        cout<<"\n";
    }
}
