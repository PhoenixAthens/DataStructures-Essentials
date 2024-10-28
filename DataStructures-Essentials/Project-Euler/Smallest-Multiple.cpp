#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::cin;


int main(int argc, char** argv){
    int t;
    cin >> t;
    int start,end;
    vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    while(t>0){
        cin >> start >> end;
        for(int i=start;i<=end;i++){
            if(i==1||i==2||i==3)continue;
            int i_copy = i;
            for(int p:primes){
                if(i_copy%p==0){
                    i_copy/=p;
                }
            }
            primes.push_back(i_copy);
        }
        long long number{1};
        for(int i:primes)number*=i;
        cout << "value: " << number << "\n";
        t--;
    }
    
    
}
