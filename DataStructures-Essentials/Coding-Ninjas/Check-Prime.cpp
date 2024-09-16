#include <cmath>
using std::sqrt;
bool isPrime(int n){
    int sq = sqrt((double)n);
    for(int i=2;i<=sq;i++){
        if( n % i == 0 )return false;
    }
    return true;
}

