#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1)cout<<"NO\n";
        else{
            int sq = sqrt(n);
            bool flag = true;
            for(int i=2;i<=sq;i++){
                if(n%i==0){
                    flag=false;
                    break;
                }
            }
            if(flag) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
