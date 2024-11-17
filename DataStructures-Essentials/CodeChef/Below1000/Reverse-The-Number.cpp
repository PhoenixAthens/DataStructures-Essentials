#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int rev{0};
        while(n!=0){
            rev+=n%10;
            rev*=10;
            n/=10;
        }
        cout << rev/10 << "\n";
        
    }
}
