#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;
int main(){
    int t;
    cin >> t;
    int n,m,k;
    string s;
    while(t--){
        cin >> n >> m >> k;
        cin >> s;
        int cnts{0};
        int cnt{0};
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cnt++;
            }
            
            if(cnt==m){
                cnts++;
                int k_copy=k;
                while(i<s.size() && k_copy!=0){
                    s[i]='1';
                    i++;
                    k_copy--;
                }
                cnt=0;
            }else if(s[i]=='1'){
                cnt=0;
            }
            
        }
        
        cout << cnts << "\n";
    }
}
