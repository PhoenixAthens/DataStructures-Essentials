#include <iostream>
#include <unordered_set>
using std::cout;
using std::cin;
using std::unordered_set;
int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        unordered_set<int> set;
        int n_copy = n;
        while(n_copy--){
            int temp;
            cin >> temp;
            set.insert(temp);
        }
        cout << ((set.size()==n)?n-1:n-set.size()) << "\n";
    }
}
