#include <iostream>
#include <stack>
using std::cout;
using std::cin;
using std::string;
using std::stack;
int main(){
    int t;
    string s;
    cin >> t;
    while(t>0){
        cin >> s;
        string rpn;
        stack<char> operators;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                rpn.push_back(operators.top());
                operators.pop();
            }else if(s[i]!='('){
                if(s[i]>='a' && s[i]<='z'){
                    rpn.push_back(s[i]);
                }else{
                    operators.push(s[i]);
                }
            }
        }
        cout << rpn << "\n";
        t--;
    }
}
