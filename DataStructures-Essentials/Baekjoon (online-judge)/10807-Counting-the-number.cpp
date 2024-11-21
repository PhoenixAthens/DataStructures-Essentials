#include <unordered_map>
#include <iostream>
using std::unordered_map;
using std::cout;
using std::cin;
int main(){
    unordered_map<int,int> map;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(map.find(temp)!=map.end()){
            map[temp]++;
        }else{
            map[temp]=1;
        }
    }
    int find;
    cin >> find;
    cout << map[find] << "\n";
}
