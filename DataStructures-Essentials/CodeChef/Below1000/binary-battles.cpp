#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int levels = log2(n);
        cout << (levels*a+(levels-1)*b) << "\n";
    }
}
