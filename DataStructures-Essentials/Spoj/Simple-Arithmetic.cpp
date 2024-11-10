#include <iostream>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;
using std::reverse;
void add(string num1, string num2);
//void sub(string num1, string num2);
//void multi(string num1, string num2);
int main(){
    int t;
    cin >> t;
    while(t--){
        string exp;
        cin >> exp;
        string num1;
        string num2;
        int i=0;
        while(exp[i]>='0' and exp[i]<='9'){
            num1.push_back(exp[i]);
        }
        char operation = exp[i++];
        while(exp[i]>='0' and exp[i]<='9'){
            num2.push_back(exp[i]);
        }
        if(operation == '+'){
            add(num1,num2);
        }else if(operation == '-'){
            //sub(num1,num2);
        }else{
            //multi(num1,num2);
        }
    }
    return 0;
}
//implement addition
void add(string num1, string num2){
    string revResult;
    int size_num1 = num1.size();
    int size_num2 = num2.size();
    if(size_num1>size_num2){
        int carry = 0;
        int j = size_num1-1;
        int i = size_num2-1;
        while(i>=0){
            int result = (num1[j--]-'0')+(num2[i--]-'0')+carry;
            revResult.push_back(result%10);
            carry = result/10;
        }
        while(j>=0){
            int result = (num1[j--]-'0')+carry;
            revResult.push_back(result%10);
            carry = result/10;
        }
    }else if(size_num1<size_num2){
        int carry = 0;
        int j = size_num2-1;
        int i = size_num1-1;
        while(i>=0){
            int result = (num2[j--]-'0')+(num1[i--]-'0')+carry;
            revResult.push_back(result%10);
            carry = result/10;
        }
        while(j>=0){
            int result = (num2[j--]-'0')+carry;
            revResult.push_back(result%10);
            carry = result/10;
        }
    }else{
        int carry = 0;
        for(int i=size_num1-1;i>=0;i--){
            int result = (num1[i]-'0') + (num2[i]-'0') + carry;
            revResult.push_back(result%10);
            carry = result/10;
        }
    }
    reverse(revResult.begin(),revResult.end());
    for(int i=0;i<revResult.size();i++){
        cout << revResult[i] << " ";
    }
    cout << "\n";
    
}
//implement subtraction

//implement multiplication

