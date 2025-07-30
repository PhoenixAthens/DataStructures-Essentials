#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int bills{0};
        bills += n/100;
        n = n%100;
        bills += n/50;
        n = n%50;
        bills += n/10;
        n = n%10;
        bills += n/5;
        n = n%5;
        bills += n/2;
        n = n%2;
        bills += n/1;
        n = n%1;
        cout << bills << "\n";
    }
}
