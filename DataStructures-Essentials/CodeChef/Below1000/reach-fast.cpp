#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,k;
        cin >> a >> b >> k;
        int steps = abs(a-b)/k;
        if(abs(a-b)%k!=0)steps++;
        cout << steps << "\n";
    }
}
