#include <iostream>
#include <map>
using std::cout;
using std::cin;
using std::map;
int main(){
    map<int,int> md;
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        int temp;
        cin >> temp;
        md[temp]=i;
    }
}
