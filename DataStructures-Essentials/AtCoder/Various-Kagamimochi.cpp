#include <iostream>
#include <set>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::multiset;
using std::distance;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    multiset<int> s;
    while(n--){
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    int cnt{0};
    for(int i:s){
        cnt+=distance(s.lower_bound(2*i), s.end());
    }
    cout << cnt << "\n";
}

Actually the projects mentioned in the list of projects are long running projects. I have been working on them, building my systems programming skill-set to further my skills needed to finish them, but your point makes sense!
