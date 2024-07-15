#include <iostream>
#include <string>
#include <regex>
#include <cmath>

using std::cout;
using std::ios_base;
using std::cin;
using std::string;
using std::endl;

int main(int argc, char** argv) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[0] == 'R') {
            int i = 1;
            while (s[i] <= 57) i++;
            string part1 = s.substr(1, i);
            if(i<s.length()){
                string part2 = s.substr(i + 2, s.length());
                int columns = stoi(part2);
                string inOtherNotation = "";
                while (columns != 0) {
                    inOtherNotation.insert(0, 1, arr[columns % 26]);
                    columns /= 26;
                }
                cout << inOtherNotation << part1 << endl;
            }else{
                cout << part1 << endl;
            }
        } else {
            int i = 0;
            while (s[i] > 57) i++;
            string part1 = s.substr(0, i);
            string part2 = s.substr(i, s.length());
            int cols = 0;
            int base = 0;
            for (int j = part1.length() - 1; j >= 0; j--) {
                cols += (part1[j] - 'A' + 1) * pow(26, base++);
            }
            cout << "R" << part2 << "C" << cols << endl;
        }
    }
}
