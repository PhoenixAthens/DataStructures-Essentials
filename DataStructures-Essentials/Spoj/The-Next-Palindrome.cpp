#include <iostream>
using std::cout;
using std::cin;
using std::to_string;
using std::string;
int main(){
    int t;
    long k;
    cin >> t;
    while(t>0){
        cin >> k;
        k++;
        while(true){
            int len = log10(k);
            int firstDigit = k/pow(10,len);
            if(firstDigit == k%10){
                int k_copy = k;
                int revNum = 0;
                while(k_copy!=0){
                    revNum+=k_copy%10;
                    k_copy/=10;
                    revNum*=10;
                }
                revNum/=10;
                if(revNum==k){
                    cout << k << "\n";
                    break;
                }
            }
           
            
            k++;
        }
        t--;
    }
}
