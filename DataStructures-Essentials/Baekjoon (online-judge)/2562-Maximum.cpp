#include <iostream>
#include <climits>
using std::cout;
using std::cin;
using std::ios;
static const int KDS = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
int main(){
    int maxNum = INT_MIN;
    int num;
    int cnt=1;
    int index=1;
    while(index<=9){
        cin>>num;
        if(num>maxNum){
            maxNum=num;
            cnt=index;
        }
        index++;
    }
    cout << maxNum << " " << cnt << "\n";
}


