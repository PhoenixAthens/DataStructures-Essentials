#include <iostream>
using std::cout;
using std::cin;
using std::min;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,m;
        cin >> a >> b >> m;
        int path1 = abs(a-b);
        int path2 = abs(m-b+a);
        int path3 = abs(m-a+b);
        cout << min(path1,min(path2,path3)) << "\n";
    }
}
