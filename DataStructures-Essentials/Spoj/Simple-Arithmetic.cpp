#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;
using std::reverse;
using std::vector;
using std::max;
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
            cout<<"\n";
        }else if(operation == '-'){
            sub(num1,num2);
            cout<<"\n";
        }else{
            multi(num1,num2);
            cout<<"\n";
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
void multi(string a, string b){
    vector<vector<char>> store;
    int tens=0;
    for(int i=b.size()-1;i>=0;i--){
        char c = b[i];
        vector<char> s1;
        int carry=0;
        for(int j=0;j<tens;j++)s1.push_back('0');
        for(int j=a.size()-1;j>=0;j--){
            int prod = ((c-'0') * (a[j]-'0'))+carry;
            s1.push_back('0'+(prod%10));
            carry = prod/10;
        }
        while(carry!=0){
            s1.push_back('0'+(carry%10));
            carry/=10;
        }
//        for(int j=s1.size()-1;j>=tens;j--)cout<<s1[j];
//        cout<<"\n";
        tens++;
        store.push_back(s1);
    }
    vector<int> result;
    int maxLen=0;
    for(auto a: store){
        maxLen=max((int)a.size(),maxLen);
    }
    for(auto& a: store){
        while(a.size()<maxLen){
            a.push_back('0');
        }
    }
    int carry=0;
    for(int i=0;i<maxLen;i++){
        int sum{0};
        for(int j=0;j<store.size();j++){
            sum+=(store[j][i]-'0');
        }
        sum+=carry;
        result.push_back(sum%10);
        carry=sum/10;
    }
    while(carry!=0){
        result.push_back(carry%10);
        carry/=10;
    }
    int lenRes = result.size();
    for(int i=0;i<lenRes-a.size();i++){
        cout<<" ";
    }
    cout<<a<<"\n";
    for(int i=0;i<lenRes-b.size()-1;i++){
        cout<<" ";
    }
    cout<<"*"<<b<<"\n";
    int maxFrom_ab = max(a.size(),b.size());
    for(int i=0;i<lenRes-maxFrom_ab-1;i++)cout<<" ";
    for(int i=0;i<=maxFrom_ab;i++)cout<<"-";
    cout<<"\n";
    for(int i=0;i<store.size();i++){
        int j=0;
        while(store[i][j]=='0' && j<store[i].size()-(1-i)){
            cout<<" ";
            j++;
        }
        if(store[i][store[i].size()-1]=='0'){
            cout<<'0';
        }else{
            for(int j=store[i].size()-(1+i);j>=0;j--){
                if(store[i][j]=='0'){
                    cout<<" ";
                }else{
                    cout<<store[i][j];
                }
                
            }
        }
        cout<<"\n";
    }
    for(int i=0;i<result.size();i++)cout<<"-";
    cout<<"\n";
    for(int i=result.size()-1;i>=0;i--)cout<<result[i];
    cout<<"\n";
}
