#include <iostream>
#include <list>
using std::cin;
using std::cout;
using std::list;
using std::string;
int main(){
    int q;
    cin >> q;
    list<int> vec;
    while(q--){
        string s;
        cin >> s;
        if(s.size()==1){
            vec.push_back(0);
        }else{
            int secondValue{0};
            for(int i =2;i<s.size();i++){
                secondValue+=s[i]-'0';
                secondValue*=10;
            }
            secondValue/=10;
            if(s[0]=='2'){
                for(int& i:vec){
                    i+=secondValue;
                }
            }else{
                int count=0;
                for(auto i = vec.begin();i!=vec.end();i++){
                    if((*(i)) >=secondValue){
                        count++;
                        vec.erase(i);
                        
                    }
                }
                cout<<count<<"\n";
            }
        }
    }
}
