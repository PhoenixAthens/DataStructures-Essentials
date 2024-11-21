#include <iostream>
using std::cout;
using std::cin;
using std::string;
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
int main(){
    string eq;
    cin >> eq;
    int ones{0},twos{0},threes{0};
    for(int i=0;i<eq.size();i+=2){
        if(eq[i]=='1')ones++;
        else if(eq[i]=='2')twos++;
        else threes++;
    }
    string result;
    for(int i=0;i<ones;i++){
        result.push_back('1');
        result.push_back('+');
    }
    for(int i=0;i<twos;i++){
        result.push_back('2');
        result.push_back('+');
    }
    for(int i=0;i<threes;i++){
        result.push_back('3');
        result.push_back('+');
    }
    result.pop_back();
    cout << result << "\n";
}
