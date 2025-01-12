#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int k;
    string start;
    string target;
    cin >> k;
    cin >> start >> target;
    int s1=start.size(),s2=target.size();
    if(s1==s2){
        int diff{0};
        for(int i=0;i<s1;i++){
            if(start[i]!=target[i])diff++;
        }
        if(diff>1)cout<<"No\n";
        else cout<<"Yes\n";
    }else{
        if(s1<s2){
            int diff{0};
            int i=s1-1;
            int j=s2-1;
            while(i>=0){
                if(start[i]!=target[j]){
                    diff++;
                }
                i--;
                j--;
            }
            if(diff>1)cout<<"No\n";
            else cout<<"Yes\n";
        }else{
            int diff{0};
            int i=s2-1;
            int j=s1-1;
            while(i>=0){
                if(target[i]!=start[j]){
                    diff++;
                }
                i--;
                j--;
            }
            if(diff>1)cout<<"No\n";
            else cout<<"Yes\n";
        }
    }
}
