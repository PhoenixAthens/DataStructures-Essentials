#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::ios_base;
using std::vector;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, q;
    cin >> n >> q;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    vector<long> pref(n+1);
    for(int i = 1; i<=n;i++){
        pref[i] = pref[i-1] + x[i-1];
    }
    for(int i = 0; i < q; i++){
        int a,b;
        cin >> a >> b;
        cout << pref[b] - pref[a-1] << "\n";
    }
}
