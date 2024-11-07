#include <iostream>
using std::cin;
using std::cout;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int N,X;
        cin >> N >> X;
        int evens;
        int odds;
        if(N%2==0){
            cout << N/2-1 << "\n";
        }else{
            evens = N/2;
            odds = N/2+1;
            if(X%2==0){
                cout << evens-1 << "\n";
            }else{
                cout << odds-1 << "\n";
            }
        }
        t--;
    }
}
