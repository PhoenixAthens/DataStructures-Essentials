#include <iostream>
int main(){
    int numberOfInputs{0};
    std::cin >> numberOfInputs;
    int length;
    int temp;
    while(numberOfInputs>0){
        std::cin >> length;
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0;i<length;i++){
            std::cin >> temp;
            max = std::max(temp,max);
            min = std::min(temp,min);
        }
        int sum{0};
        sum+=(max-min)*(length-1);
        std::cout << sum <<"\n";
        numberOfInputs--;
    }
}
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
