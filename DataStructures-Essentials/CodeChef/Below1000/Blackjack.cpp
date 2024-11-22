#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int a,b;
    while(t--){
        cin >> a >> b;
        int sum = a + b;
        if(sum==a || sum==b || 21-sum > 10)cout<<1<<"\n";
        else cout << 21-sum << "\n";
    }
}
