#include <iostream>
using std::cin;
using std::cout;
using std::min;
using std::ios;
int main(int argc, char** argv){
    int testCases{0},length{0};
    cin >> testCases;
    while(testCases>0){
        cin >> length;
        int temp{0};
        int ones{0};
        int twos{0};
        int count{0};
        for(int i = 0;i<length;i++){
            cin >> temp;
            if(temp%3==0)count++;
            else if(temp%3==1)ones++;
            else twos++;
        }
        int small = min(ones,twos);
        count+=small;
        ones-=small;
        twos-=small;
        if(ones>0)count+=ones/3;
        if(twos>0)count+=twos/3;
        cout << count << "\n";
        testCases--;
    }
    return 0;
    
}
static const int KDS = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

