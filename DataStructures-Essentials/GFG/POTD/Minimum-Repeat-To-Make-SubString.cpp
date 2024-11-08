//wrong solution
#include <iostream>
#include <unordered_set>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::unordered_set;
class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        unordered_set<char> fromS1;
        for(char c: s1){
            fromS1.insert(c);
        }
        for(char c: s2){
            if(fromS1.find(c)==fromS1.end()){
                return -1;
            }
        }
        int lenOfS1 = s1.size();
        int lenOfS2 = s2.size();
        int i=2;
        while(lenOfS1<lenOfS2){
            lenOfS1*=i;
            i++;
        }
        return i-1;
    }
};

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
