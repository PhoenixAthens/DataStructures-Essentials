#include <iostream>
#include <unordered_set>
using std::cout;
using std::cin;
using std::unordered_set;
int main(){
    unordered_set<int> us;
    for(int i=0;i<10;i++){
        int temp;
        cin >> temp;
        us.insert(temp%42);
    }
    cout << us.size() << "\n";
}
