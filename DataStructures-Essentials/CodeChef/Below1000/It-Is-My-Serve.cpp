#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    int p,q;
    while(t--){
        cin >> p >> q;
        //Alice Bob Alice Bob
        //0 0 -> 0/2 = 0 (Alice)
        //0 2 -> 2/2 = 1 (Bob)
        //2 2 -> 4/2 = 2 (Alice)
        //4 7 -> 11/2 = 5 (Bob)
        if(((p+q)/2)%2==0){
            cout << "Alice\n";
        }else{
            cout << "Bob\n";
        }
    }
}
