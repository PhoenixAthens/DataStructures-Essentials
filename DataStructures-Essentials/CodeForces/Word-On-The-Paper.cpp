#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::vector;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<string> vec(8);
        for(int i=0;i<8;i++){
            string s;
            cin >> s;
            vec[i]=s;
        }
        bool flag=false;
        string result;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(vec[i][j]!='.'){
                    result.push_back(vec[i][j]);
                    for(int k=i+1;k<8 && vec[k][j]!='.';k++){
                        result.push_back(vec[k][j]);
                    }
                    flag=true;
                    break;
                }
            }
            if(flag)break;
        }
        cout<<result<<"\n";
    }
}
