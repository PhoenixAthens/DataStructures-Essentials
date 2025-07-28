#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int s{0};
        int l{0};
        string a;
        while(n--){
            cin >> a;
            if(a[0]=='S')s++;
            else l++;
        }
        cout << s << " " << l << "\n";
    }
}
