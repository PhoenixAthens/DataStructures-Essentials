#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    char str[101];
    cin >> str;
    int sum{0};
    for(int i=0;i<n;i++){
        sum+=(str[i]-'0');
    }
    cout << sum << "\n";
}
