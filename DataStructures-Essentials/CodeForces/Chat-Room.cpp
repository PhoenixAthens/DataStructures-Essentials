#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::vector;
vector<char> vec{'h','e','l','l','o'};
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int i=0;
    string given;
    cin >> given;
    for(char c:given){
        if(c==vec[i])i++;
        if(i==vec.size()){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}
    
