#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
int main(){
    int t,n;
    cin >> t;
    
    while(t--){
        vector<int> vec;
        int divB = 10;
        cin >> n;
        int n_copy=n;
        while(n!=0){
            int val = n_copy%divB;
            if(val!=0){
                vec.push_back(val);
            }
            n_copy-=val;
            n/=10;
            divB*=10;
        }
        cout << vec.size() << "\n";
        for(int i:vec)cout<<i<<" ";
        cout<<"\n";
    }
    
}
