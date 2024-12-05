#include <iostream>
using std::cout;
using std::cin;
using std::min;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int calc_for_nl = (k*l)/nl;
    int calc_for_lime = (c*d);
    int calc_for_salt = p/np;
    int calc_final = min(calc_for_nl,min(calc_for_lime,calc_for_salt))/n;
    cout << calc_final << "\n";
}
