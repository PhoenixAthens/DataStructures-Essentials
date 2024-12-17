#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n,k;
    cin >> n >> k;
    int cnt{0};
    int temp;
    while(n--){
        cin >> temp;
        if(5-temp>=k)cnt++;
    }
    cout << cnt/3 << "\n";
}
