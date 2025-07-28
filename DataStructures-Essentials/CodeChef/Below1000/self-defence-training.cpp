#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int res{0};
        while(n--){
            int a;
            cin >> a;
            if(a>=10 and a<=60)res++;
        }
        cout << res << "\n";
    }
}
