#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    string s;
    int n_size;
    while(t--){
        cin >> s;
        n_size = s.size();
        string res;
        res.push_back(s[0]);
        for(int i=1;i<n_size-1;i++){
            if(s[i]==s[i+1]){
                i++;
                res.push_back(s[i]);
            }
        }
        res.push_back(s[n_size-1]);
        cout<<res<<"\n";
    }
}
