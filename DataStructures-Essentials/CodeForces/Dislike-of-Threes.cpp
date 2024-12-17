#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
int main(){
    int t,k_t;
    cin >> t;
    vector<int> vec(1001);
    int k=0;
    int i=1;
    while(k<=1000){
        if(i%3!=0 && i%10!=3){
            vec[k]=i;
            k++;
        }
        i++;
    }
    while(t--){
        cin >> k_t;
        cout << vec[k_t-1] << "\n";
    }
    
    
}
