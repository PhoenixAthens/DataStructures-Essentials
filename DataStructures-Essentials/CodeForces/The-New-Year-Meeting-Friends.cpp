#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::sort;
using std::min;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> vec{a,b,c};
    sort(vec.begin(),vec.end());
    int minSum{INT_MAX};
    for(int i=vec[0];i<=vec[2];i++){
        minSum = min(minSum,abs(a-i)+abs(b-i)+abs(c-i));
    }
    cout << minSum << "\n";
}
