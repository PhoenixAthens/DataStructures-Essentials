#include <unordered_set>
#include <unordered_map>
#include <iostream>
using std::cout;
using std::cin;
using std::unordered_set;
using std::unordered_map;
int main(int argc, char** argv){
    int numOfElements;
    unordered_set<int> store;
    //unordered_set<int> values{4,8,15,16,23,42};
    unordered_map<int, int> value{
        {4,0},{8,1},{15,2},{16,3},{23,4},{42,5}
    };
    int arr[]={4,8,15,16,23,42};
    cin >> numOfElements;
    if(numOfElements<6){
        cout << numOfElements << "\n";
        return 0;
    }
    int temp;
    int count{0};
    for(int i=0;i<numOfElements;i++){
        cin >> temp;
        if(value.contains(temp)){
            if(store.contains(arr[value[temp]-1])){
                store.insert(temp);
            }else{
                count++;
            }
            
        }else{
            count++;
        }
        if(store.size()==6){
            store.clear();
        }
    }
    //count += (numOfElements-store.size())%6;
    cout << count << "\n";
    return 0;
}
