#include <iostream>
#include <set>
#include <cmath>
using std::set;
using std::cout;
using std::cin;
int main(){
    set<int> u_set{2,3,5,7,11};
    for(int i=13;i<50;i++){
        int sq = sqrt(i);
        bool flag = true;
        for(int j=2;j<=sq;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag)u_set.insert(i);
    }
    int n,m;
    cin >> n >> m;
    if(u_set.find(n)!=u_set.end() && *(++u_set.find(n))==m){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
