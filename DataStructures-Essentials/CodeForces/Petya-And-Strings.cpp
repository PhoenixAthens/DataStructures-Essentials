#include <iostream>
using std::cout;
using std::cin;
using std::string;
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
int main(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    bool same=true;
    for(int i=0;i<a.size();i++){
        if(a[i]<=90)a[i]+=32;
        if(b[i]<=90)b[i]+=32;
        if(a[i]<b[i]){
            cout<<-1<<"\n";
            same=false;
            break;
        }else if(a[i]>b[i]){
            cout<<1<<"\n";
            same=false;
            break;
        }
    }
    if(same)cout<<0<<"\n";
}
