#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::ios_base;
#define ll long long

int main(int argc, char** argv){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a;
    cin >> n >> m >> a;
    ll result = ceil(1.0*n/a)*ceil(1.0*m/a);
    cout << result << endl;
    return 0;
}
