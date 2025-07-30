#include <iostream>
#include <unordered_map>
using std::cout;
using std::cin;
using std::unordered_map;
int main(){
    unordered_map<char,int> u_map{{'R',2},{'B',1},{'G',0}};
    char p1,p2;
    cin >> p1 >> p2;
    if(u_map[p1] >= u_map[p2])cout<<p1<<"\n";
    else cout<<p2<<"\n";
}
