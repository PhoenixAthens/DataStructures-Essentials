#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    string fixed = "ADVITIYA";
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        for(int i=0;i<8;i++){
            if(s[i]>fixed[i]){
                count += 'Z'-s[i];
                count += fixed[i]-'A'+1;
            }else{
                count += fixed[i]-s[i];
            }
        }
        cout << count << "\n";
    }
}

