#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[0] && i+5<s1.size()){
            bool flag=true;
            int j=i+1;
            int k = 1;
            while(k<5){
                if(s1[j]!=s2[k]){
                    flag=false;
                    break;
                }
                j++;
                k++;
            }
            if(flag){
                cout << 1 <<"\n";
                break;
            }
        }
    }
    cout << 0 << "\n";
    return 0;
}
