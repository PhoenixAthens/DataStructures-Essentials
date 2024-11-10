#include "../Below500/all.h"
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(n<=x)cout<<0<<"\n";
        else{
            int remain = n-x;
            if(remain%4==0){
                cout << remain/4  << "\n";
            }else{
                cout << remain/4+1 <<"\n";
            }
        }
    }
}
