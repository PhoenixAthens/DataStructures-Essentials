#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    int steps{0};
    for(int i=5;i>=1 && n!=0;i--){
        while(n/i!=0){
            steps+=n/i;
            n-=i*(n/i);
        }
    }
    cout << steps << "\n";
}
