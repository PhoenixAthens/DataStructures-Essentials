#include <iostream>
using std::cout;
using std::cin;
using std::min;
int main(){
    int a,b;
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int i=min(a,b);
        for(;;i++){
            if(i%a == i%b)
                break;
        }
        cout << i << "\n";
    }
}
