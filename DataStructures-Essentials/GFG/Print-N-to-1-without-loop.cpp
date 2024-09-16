#include <iostream>
using std::cout;
using std::cin;
class Solution {
  public:
    void printNos(int N) {
        if(N==0)return;
        cout << N << " ";
        printNos(--N);
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        
        Solution ob;
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}
