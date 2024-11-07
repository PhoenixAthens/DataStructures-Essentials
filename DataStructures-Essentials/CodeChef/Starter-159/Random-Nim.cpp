//still working on this one!
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using std::cout;
using std::cin;
using std::vector;
using std::numeric_limits;
using std::setprecision;
using std::fixed;
long mod_exp(long base, long exp, long mod){
    long result = 1;
    while(exp>0){
        if(exp%2==1){
            result = (result*base)%mod;
        }
        base = (base*base)%mod;
        exp/=2;
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    while(t>0){
        int mod = 1e9+7;
        int N, D;
        cin >> N >> D;
        vector<int> vec((int)N);
        for(int i=0;i<N;i++){
            cin >> vec[i];
        }
        long d_inv =mod_exp(D,mod-2,mod);
        long re = (N*d_inv)%mod;
        cout << re << "\n";
        t--;
    }
}
