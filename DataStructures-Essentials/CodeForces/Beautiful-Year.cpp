#include <iostream>
#include <unordered_set>
#include <math.h>
using std::cout;
using std::cin;
using std::unordered_set;
int main(){
    int n;
    cin >> n;
    n+=1;
    while(true){
        unordered_set<int> uset;
        int n_copy=n;
        while(n_copy!=0){
            uset.insert(n_copy%10);
            n_copy/=10;
        }
        if(uset.size()==4){
            cout<<n<<"\n";
            break;
        }
        n++;
    }
}
