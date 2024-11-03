#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::reverse;
int main(){
    vector<int> vec {1,2,3,4,5};
    reverse(vec.begin(),vec.begin()+2);
    for(int i: vec){
        cout << i << " ";
    }
    cout << "\n";
//    int t;
//    string s;
//    cin >> t;
//    while(t>0){
//        cin >> s;
//        int num1{0};
//        int num2{0};
//        char op;
//        bool flag = true;
//        for(char c: s){
//            if(c=='+'||c=='-'||c=='*'){
//                op = c;
//                flag = false;
//            }
//            if(flag){
//                num1+=c;
//                num1*=10;
//            }else{
//                num2+=c;
//                num2*=10;
//            }
//            num1/=10;
//            num2/=10;
//        }
//        if(op=='+'){
//            int result = num1+num2;
//            int lenR = log10(result)+1;
//            int lenA = log10(num1)+1;
//            int lenB = log10(num2)+1;
//            for(int i=0;i<(lenR-lenA);i++){
//                cout << " ";
//            }
//            cout << num1 << "\n";
//            for(int i=0;i<((lenR-lenB)-1);i++){
//                cout << " ";
//            }
//            cout << op << num2 << "\n";
//            for(int i=0;i<lenR;i++)cout << '-' << "\n";
//            cout << result << "\n";
//        }
//        else if(op=='-'){
//            cout << ' ' << num1 << "\n";
//            cout << op <<
//        }else{
//            int spaces = 0;
//            for(int i=0;i<spaces;i++){
//                cout <<
//            }
//            
//            
//            
//        }
//        t--;
//    }
}
