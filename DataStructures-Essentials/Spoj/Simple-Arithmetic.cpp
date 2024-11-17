#include <iostream>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;
using std::reverse;
void add(string num1, string num2);
void sub(string num1, string num2);
void multi(string num1, string num2);
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
            num1.push_back(exp[i++]);
        }
        char operation = exp[i++];
        while(exp[i]>='0' and exp[i]<='9'){
            num2.push_back(exp[i++]);
        }
        if(operation == '+'){
            add(num1,num2);
        }else if(operation == '-'){
            sub(num1,num2);
        }else{
            multi(num1,num2);
        }
    }
    return 0;
}
//implement addition
string addG(string num1,string num2){
    
}
void add(string num1, string num2){
    string revResult = addG(string num1,string num2);
    int size_num1 = num1.size();
    int size_num2 = num2.size();
    if(size_num1>size_num2){
        int carry = 0;
        int j = size_num1-1;
        int i = size_num2-1;
        while(i>=0){
            int result = (num1[j--]-'0')+(num2[i--]-'0')+carry;
            revResult.push_back('0'+result%10);
            carry = result/10;
        }
        while(j>=0){
            int result = (num1[j--]-'0')+carry;
            revResult.push_back('0'+result%10);
            carry = result/10;
        }
        if(carry!=0)revResult.push_back('0'+carry);
        //printing the result
        cout << num1 << "\n";
        for(int i=0;i<size_num1-size_num2-1;i++){
            cout<<" ";
        }
        cout<<"+";
        cout << num2 << "\n";
        for(int i=0;i<size_num1;i++){
            cout<<"-";
        }
        cout<<"\n";
        reverse(revResult.begin(),revResult.end());
        for(int i=0;i<revResult.size();i++){
            cout << revResult[i];
        }
        cout << "\n";
    }else if(size_num1<size_num2){
        int carry = 0;
        int j = size_num2-1;
        int i = size_num1-1;
        while(i>=0){
            int result = (num2[j--]-'0')+(num1[i--]-'0')+carry;
            revResult.push_back('0'+result%10);
            carry = result/10;
        }
        while(j>=0){
            int result = (num2[j--]-'0')+carry;
            revResult.push_back('0'+result%10);
            carry = result/10;
        }
        if(carry!=0)revResult.push_back('0'+carry);
        //printing the result
        for(int i=0;i<size_num2+1-size_num1;i++){
            cout<<" ";
        }
        cout << num1 << "\n";
        cout<<"+"<<num2<<"\n";
        for(int i=0;i<size_num2+1;i++){
            cout<<"-";
        }
        cout<<"\n";
        cout<<" ";
        reverse(revResult.begin(),revResult.end());
        for(int i=0;i<revResult.size();i++){
            cout << revResult[i];
        }
        cout << "\n";
    }else{
        int carry = 0;
        for(int i=size_num1-1;i>=0;i--){
            int result = (num1[i]-'0') + (num2[i]-'0') + carry;
            revResult.push_back('0'+(result%10));
            carry = result/10;
        }
        if(carry!=0)revResult.push_back('0'+carry);
        cout<<" "<<num1<<"\n";
        cout<<"+"<<num2<<"\n";
        for(int i=0;i<size_num1+1;i++)cout<<"-";
        cout<<"\n";
        if(revResult.size()==size_num1)cout<<" ";
        reverse(revResult.begin(),revResult.end());
        for(int i=0;i<revResult.size();i++){
            cout << revResult[i];
        }
        cout << "\n";
    }
}
//implement subtraction
void sub(string num1, string num2){
    string revResult;
    string num1_copy(num1);
    int j=num1.size()-1;
    for(int i=num2.size()-1;i>=0;i--,j--){
        if((num1[j]-'0')<(num2[i]-'0')){
            if(num1[j-1]=='0'){
                int temp_i = j-2;
                while(num1[temp_i]=='0'){
                    temp_i--;
                }
                num1[temp_i++]--;
                while(temp_i<j){
                    num1[temp_i++]='9';
                }
            }else{
                num1[j-1]--;
            }
            int valueOfNum1 = 10+(num1[j]-'0');
            revResult.push_back('0'+(valueOfNum1-(num2[i]-'0')));
        }else{
            revResult.push_back('0'+((num1[j]-'0') - (num2[i]-'0')));
        }
    }
    while(j>=0){
        revResult.push_back(num1[j--]);
    }
    while(revResult.back()=='0')revResult.pop_back();
    int size_num1 = num1_copy.size();
    int size_num2 = num2.size();
    if(size_num1==size_num2){
        cout << " " << num1_copy << "\n";
        cout << "-" << num2 << "\n";
        for(int i=0;i<size_num1+1;i++)cout<<"-";
        cout<<"\n";
        reverse(revResult.begin(),revResult.end());
        for(int i=0;i<size_num1-revResult.size()+1;i++)cout<<" ";
        cout<<revResult<<"\n";
    }else{
        cout<<num1_copy<<"\n";
        for(int i=0;i<size_num1-size_num2-1;i++){
            cout<<" ";
        }
        cout<<"-";
        cout<<num2<<"\n";
        for(int i=0;i<size_num1;i++)cout<<"-";
        cout<<"\n";
        reverse(revResult.begin(),revResult.end());
        for(int i=0;i<size_num1-revResult.size();i++)cout<<" ";
        cout<<revResult<<"\n";
    }
}

//implement multiplication
void multi(string num1, string num2){
    int num1_size = num1.size();
    int num2_size = num2.size();
    string arr[num2_size];
    for(int i=num2_size-1;i>=0;i--){
        int digit_f2 = (num2[i]-'0');
        string result;
        int carry=0;
        for(int j=num1_size-1;j>=0;j--){
            int digit_f1 = (num1[j]-'0');
            int m = digit_f1*digit_f2;
            result.push_back(('0'+(m%10+carry)));
            m/=10;
            carry=m;
        }
        result.push_back('0'+carry);
        reverse(result.begin(),result.end());
        arr[i]=result;
    }
    int i=1;
    
    
}
