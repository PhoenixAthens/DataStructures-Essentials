#include <iostream>
using std::cout;
using std::cin;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int index{0};
        int maxPower{0};
        while(n--){
            int temp;
            cin >> temp;
            if(temp!=0){
                maxPower=index;
            }
            index++;
        }
        cout << maxPower << "\n";
    }
}
