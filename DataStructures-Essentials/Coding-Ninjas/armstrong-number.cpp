#include <iostream>
#include <cmath>
using std::pow;
bool checkArmstrong(int n){
    int result{0};
    int n_copy = n;
    int digits = log10(n)+1;
    while(n!=0){
        result+=(int)pow(n%10,digits);
        n/=10;
    }
    return n_copy == result;
}
