#include <iostream>
#include <unordered_set>
using std::cout;
using std::cin;
using std::unordered_set;
int main(){
    unordered_set<int> us;
    int arr[4];
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }
    for(int i:arr)us.insert(i);
    cout << 4-us.size() << "\n";
}
