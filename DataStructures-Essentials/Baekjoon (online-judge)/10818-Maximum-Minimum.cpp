#include <iostream>
#include <climits>
using std::max;
using std::min;
using std::cout;
using std::cin;
int main(){
    int n;
    cin >> n;
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        maxNum = max(maxNum,temp);
        minNum = min(minNum,temp);
    }
    cout << minNum << " " << maxNum << "\n";
}
