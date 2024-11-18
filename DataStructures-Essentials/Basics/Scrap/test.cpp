#include <iostream>
#include <vector>
#include <iomanip>
using std::cout;
using std::vector;
using std::cin;
using std::string;
using std::max;
using std::setprecision;
void div(){
    double a,b;
    cin >> a >> b;
    cout << setprecision(16) << a/b << "\n";
}
void arithmetic(){
    int a,b;
    cin >> a >> b;
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << a / b << "\n";
    cout << a % b << "\n";
}
void surprise(){
    string id;
    cin >> id;
    id.push_back('?');
    id.push_back('?');
    id.push_back('!');
    cout << id << "\n";
}
void buddhist_to_christian(){
    int year;
    cin >> year;
    cout << year - 543 << "\n";
}

void remain(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a+b)%c << "\n";
    cout << ((a%c) + (b%c))%c << "\n";
    cout << (a*b)%c << "\n";
    cout << ((a%c)*(b%c))%c << "\n";
}
void multiplication(){
    string a;
    string b;
    cin >> a;
    cin >> b;
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
        for(int j=s1.size()-1;j>=tens;j--)cout<<s1[j];
        cout<<"\n";
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
    for(int i=result.size()-1;i>=0;i--){
        cout<<result[i];
    }
    cout<<"\n";
}
void multiplication_2(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int b_copy = b;
    while(b_copy!=0){
        cout << a*(b_copy%10);
        b_copy/=10;
        cout << "\n";
    }
    cout << a*b << "\n";
}

int main(){
    multiplication_2();
}
