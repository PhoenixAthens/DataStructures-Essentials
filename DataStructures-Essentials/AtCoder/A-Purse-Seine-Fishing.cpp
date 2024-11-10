#include <iostream>
#include <unordered_map>
using std::cin;
using std::cout;
using std::unordered_map;
int main(){
    unordered_map<int,int> x_to_y;
    int n = 5000;
    while(n>0){
        int x, y;
        cin >> x >> y;
        if(x_to_y.find(x)!=x_to_y.end()){
            if(x_to_y[x]!=y and x_to_y[x]<y)x_to_y[x]=y;
        }else{
            x_to_y[x]=y;
        }
        n--;
    }
    for(auto i: x_to_y){
        cout << i.first << " " << i.second << "\n";
    }
}
