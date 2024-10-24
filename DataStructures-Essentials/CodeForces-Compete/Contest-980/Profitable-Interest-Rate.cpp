#include <iostream>
int main(){
    int numTC;
    std::cin >> numTC;
    int a,b;
    while(numTC>0){
        std::cin >> a >> b;
        if(a>b){
            std::cout << a << "\n";
        }else{
            if(b-2*a >= 0){
                std::cout << 0 << "\n";
            }else{
                std::cout << a-(b-a) << "\n";
            }
        }
        numTC--;
    }
}
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

