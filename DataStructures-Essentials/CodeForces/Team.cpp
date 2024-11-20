#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    int cnt{0};
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        int ones{0};
        if(a==1)ones++;
        if(b==1)ones++;
        if(c==1)ones++;
        if(ones>=2)cnt++;
    }
    cout << cnt << "\n";
}
