#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    while(t>0){
        string s;
        cin >> s;
        char flag  = 'e';
        int numOfDigits = s.size();
        for(int i=numOfDigits-1;i>numOfDigits/2;i--){
            if(s[numOfDigits-i-1]<s[i]){
                flag = 's';
            }else if(s[numOfDigits-i-1]>s[i]){
                flag = 'l';
            }
            s[i] = s[numOfDigits-i-1];
        }
        if(numOfDigits%2==0){
            if(s[numOfDigits/2] < s[numOfDigits/2-1]){
                flag = 'l';
            }else if(s[numOfDigits/2] > s[numOfDigits/2-1]){
                flag = 's';
            }
            s[numOfDigits/2]=s[numOfDigits/2-1];
        }
        if(flag=='s' || flag =='e'){
            if(s[numOfDigits/2]!='9'){
                if(numOfDigits%2==0){
                    s[numOfDigits/2]++;
                    s[numOfDigits/2-1]++;
                }else{
                    s[numOfDigits/2]++;
                }
            }else{
                for(int i=0;i<numOfDigits;i++){
                    s[i]=0;
                }
                s[0]='1';
                s.push_back('1');
            }
        }
        cout << s << "\n";
        t--;
    }
}

