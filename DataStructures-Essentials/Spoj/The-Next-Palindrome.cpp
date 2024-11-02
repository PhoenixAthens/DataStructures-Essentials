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
            int digits = log10(k);
            long first = pow(10,digits);
            bool flag = true;
            int k_copy=k;
            for(int i=0;i<digits/2;i++){
                int first_digit = k_copy%first;
                int last = k_copy%10;
                if(first_digit!=last){
                    flag = false;
                    break;
                }
                k_copy/=10;
                first/=10;
            }
            if(flag){
                cout << k << "\n";
                break;
            }
            k++;
        }
        t--;
    }
}
