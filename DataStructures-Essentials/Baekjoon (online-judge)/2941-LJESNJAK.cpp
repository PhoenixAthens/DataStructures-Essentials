#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    int cnt{0};
    for(int i=0;i<s.size();i++){
        if(s[i]=='c' && i!=s.size()-1){
            if(s[i+1]=='=' || s[i+1]=='-'){
                i++;
            }
        }else if(s[i]=='d' && i!=s.size()-1){
            if(s[i+1]=='-'){
                i++;
            }else if(i!=s.size()-2 && s[i+1]=='z' && s[i+2]=='='){
                i+=2;
            }
        }else if(s[i]=='l' && i!=s.size()-1){
            if(s[i+1]=='j'){
                i+=1;
            }
        }else if(s[i]=='n' && i!=s.size()-1){
            if(s[i+1]=='j'){
                i+=1;
            }
        }else if(s[i]=='s' && i!=s.size()-1){
            if(s[i+1]=='='){
                i+=1;
            }
        }else if(s[i]=='z' && i!=s.size()-1){
            if(s[i+1]=='='){
                i+=1;
            }
        }cnt++;
    }
    cout << cnt << "\n";
}
