#include <iostream>
#include <unordered_set>
using std::cout;
using std::cin;
using std::unordered_set;
int main(){
    unordered_set<char> u_set{'c','o','d','e','f','r','s'};
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        if(u_set.find(c)!=u_set.end())cout<<"YES\n";
        else cout<<"NO\n";
    }
}
