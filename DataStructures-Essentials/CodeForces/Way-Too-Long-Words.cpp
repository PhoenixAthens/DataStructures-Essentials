#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int n;
    cin >> n;
    string word;
    while(n--){
        cin >> word;
        int n = word.size();
        if(n>10){
            cout << word[0] << n-2 << word[n-1] << "\n";
            
        }else{
            cout << word << "\n";
        }
    }
}
