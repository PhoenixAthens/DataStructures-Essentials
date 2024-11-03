#include <iostream>
#include <unordered_map>
using std::unordered_map;
using std::cin;
using std::cout;
int main(){
    int arr[4];
    unordered_map<int, int> mapMe;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    for(int i: arr){
        if(mapMe.find(i)!=mapMe.end()){
            mapMe[i]++;
        }else{
            mapMe[i]=1;
        }
    }
    int ans{0};
    for(auto i: mapMe){
        ans+=(i.second)/2;
    }
    cout << ans <<"\n";
    return 0;
}
