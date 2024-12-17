#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t,x,y,n;
    cin >> t;
    while(t--){
        cin >> x >> y >> n;
        int sub = n%x;
        if(sub==y)cout<<n<<"\n";
        else if(sub>y){
            cout << n-(sub-y) << "\n";
        }else{
            cout << n-sub-(x-y) << "\n";
        }
    }
}
