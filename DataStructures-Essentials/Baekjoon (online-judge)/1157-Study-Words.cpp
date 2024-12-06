#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s;
    cin >> s;
    int letters[26]{0};
    for(char c: s){
        letters[tolower(c)-'a']++;
    }
    int most{INT_MIN};
    char most_present{'\0'};
    int s_most{INT_MIN};
    for(int i=0;i<26;i++){
        if(letters[i]>=most){
            s_most = most;
            most = letters[i];
            most_present = 'A'+i;
        }
    }
    if(s_most == most)cout<<"?\n";
    else cout<<most_present<<"\n";
}
