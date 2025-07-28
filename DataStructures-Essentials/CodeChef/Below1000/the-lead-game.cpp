#include <iostream>
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    int lead{0};
    int cd{0};
    int sumA{0};
    int sumB{0};
    while(n--){
        int a,b;
        cin >> a >> b;
        sumA+=a;
        sumB+=b;
        int diff = abs(sumA-sumB);
        if(diff>cd){
            cd = diff;
            if(sumA>sumB)lead=1;
            else lead=2;
        }
    }
    cout << lead << " " << cd << "\n";
}
