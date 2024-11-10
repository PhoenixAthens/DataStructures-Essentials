#include <iostream>
using std::cout;
using std::cin;
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int l,r,k;
        cin >> l >> r >> k;
        if(k==1){
            cout << r-l+1 << "\n";
        }else{
            int count = (r-l)/k;
//            int r_2 = r/2;
//            for(int i=l;i<=r_2;i++){
//                if(r/i>=k)count++;
//            }
            cout << count-1 << "\n";
        }
    }
}
