#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main(){
    int t;
    cin >> t;
    while(t--){
        string num;
        cin >> num;
        int end = num.length()-1;
        bool flag = true;
        for(int i=0;i<num.length()/2;i++){
            if(num[i]!=num[end--]){
                flag=false;
                break;
            }
        }
        if(flag)cout<<"wins\n";
        else cout<<"loses\n";
        
    }
}
