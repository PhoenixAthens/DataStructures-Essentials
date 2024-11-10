#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
using std::string;
int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt{0};
    int len{0};
    for(char c: s){
        if(c=='X'){
            cnt+=(len/k);
            len=0;
        }else{
            len++;
        }
    }
    cnt+=(len/k);
    cout << cnt << "\n";
}

