#include <iostream>
using std::cout;
using std::cin;

int hcf(int a,int b){
    if(a==0)return b;
    else{
        int rem = b%a;
        return hcf(rem,a);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(abs(a-b)%2==1)cout<<"NO\n";
        else cout<<"YES\n";
//        if(a>=b){
//            hcfOf = hcf(b,a);
//        }else{
//            hcfOf = hcf(a,b);
//        }
//        if(hcfOf == 1 && abs(a-b)%2==1)cout << "NO\n";
//        else cout<<"YES\n";
    }
//    cout << hcf(42,91) << "\n";
}
