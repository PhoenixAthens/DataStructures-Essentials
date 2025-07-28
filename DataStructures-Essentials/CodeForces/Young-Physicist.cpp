#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::vector;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int sumX{0};
    int sumY{0};
    int sumZ{0};
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        sumX+=a;
        sumZ+=c;
        sumY+=b;
    }
    if(sumX==0 && sumY==0 && sumZ==0)cout<<"YES\n";
    else cout<<"NO\n";
}
