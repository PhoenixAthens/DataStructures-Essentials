#include <iostream>
#include <sstream>
#include <regex>

using namespace std;

/*
 * Write the regular expression in the blank space below
 */
regex regularExpression(R"(^([a-z]).*?\1$|^[a-b]$)");

int main()
{
    int query;
    cin >> query;
    
    vector<string> result(query, "False");
    for (int i = 0; i < query; i++) {
        string someString;
        cin >> someString;
        
        if (regex_match(someString, regularExpression)) {
            result[i] = "True";
        }
    }
    
    //ofstream fileOut(getenv("OUTPUT_PATH"));
    for (string res: result) {
        cout << res << endl;
    }
    
    return 0;
}
