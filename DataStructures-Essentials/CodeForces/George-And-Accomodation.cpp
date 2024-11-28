#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    int cnt{0};
    while(n--){
        int peeps,total;
        cin >> peeps >> total;
        if((total-peeps)>=2)cnt++;
    }
    cout << cnt << "\n";
}
