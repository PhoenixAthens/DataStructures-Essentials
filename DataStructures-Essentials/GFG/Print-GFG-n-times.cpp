#include <iostream>
using std::cout;
using std::cin;

class Solution {
private:
    int start {1};
public:
    void printGfg(int N) {
        if(start>N)return;
        cout << "GFG" << " ";
        start++;
        printGfg(N);
    }
};

int main() {
    int T;

    cin >> T;

    while (T--) {
        int N;

        cin >> N;
        Solution ob;
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}
