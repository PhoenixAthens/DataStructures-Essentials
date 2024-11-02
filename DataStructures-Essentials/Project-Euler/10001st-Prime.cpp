#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
int main(){
    vector<int> primes{2,3};
    int i=4;
    while(primes.size()<=10001){
        int sq = sqrt(i);
        bool flag = true;
        for(int j=2;j<=sq;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag)primes.push_back(i);
        i++;
    }
    cout << primes[10000] << "\n";
    return 0;
}
