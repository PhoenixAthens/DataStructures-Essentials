#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n;
    cin >> n;
    int finalVal{0};
    while(n--){
        string statement;
        cin >> statement;
        int n = statement.size();
        if(statement[0]=='+' || statement[n-1]=='+'){
            finalVal++;
        }else if(statement[0]=='-' || statement[n-1]=='-'){
            finalVal--;
        }
    }
    cout << finalVal << "\n";
}
