#include <iostream>
using std::cout;
using std::cin;
using std::max;
int main(){
    int n;
    cin >> n;
    int maxC{INT_MIN};
    int running{0};
    int exit,enter;
    while(n--){
        cin >> exit >> enter;
        running-=exit;
        running+=enter;
        maxC=max(maxC,running);
    }
    cout << maxC << "\n";
}
