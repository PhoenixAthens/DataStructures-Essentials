#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if((n/2)%2!=0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            int sum{2};
            int start=2;
            for(int i=1;i<=n/2;i++){
                cout << start << " ";
                start+=2;
                sum+=start;
            }
            sum-=start;
            int odd = 1;
            sum-=odd;
            for(int i=1;i<n/2;i++){
                cout << odd << " ";
                odd+=2;
                sum-=odd;
                
            }
            sum+=odd;
            cout << sum << "\n";
        }
    }
}
