#include <iostream>
#include <set>
using std::cout;
using std::cin;
using std::set;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,a,b;
        cin >> x >> y >> a >> b;
        set<int> s{x,y,a,b};
        if(s.size()==4)cout<<2<<"\n";
        else if(s.size()==3)cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}
