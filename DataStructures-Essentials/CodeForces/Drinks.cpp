#include <iostream>
using std::cout;
using std::cin;
int main(){
    double n;
    cin >> n;
    double sum{0};
    for(int i=0;i<n;i++){
        double temp;
        cin >> temp;
        sum+=temp;
    }
    cout << sum/n << "\n";
}
