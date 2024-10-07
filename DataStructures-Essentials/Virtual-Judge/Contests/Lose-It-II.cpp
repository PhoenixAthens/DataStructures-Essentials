#include <unordered_map>
#include <unordered_set>
#include <iostream>
using std::unordered_map;
using std::unordered_set;
using std::cout;
using std::cin;
int main(int argc, char** argv){
    int lengthOfElements;
    cin >> lengthOfElements;
    if(lengthOfElements<6){
        cout <<  lengthOfElements << "\n";
        return 0;
    }
    int arr[] {0,4,8,15,16,23,42};
    unordered_set<int> set {4,8,15,16,23,42};
    unordered_map<int, int> mapOfIndexes{
        {4,1},{8,2},{15,3},{16,4},{23,5},{42,6}
    };
    unordered_map<int, int> mapOfCounts{
        {0,INT_MAX},{4,0},{8,0},{15,0},{16,0},{23,0},{42,0}
    };
    
    int cnt{0};
    int tempVal;
    for(int i=0;i<lengthOfElements;i++){
        cin >> tempVal;
        if(set.contains(tempVal)){
            int index = mapOfIndexes[tempVal];
            if(mapOfCounts[arr[index-1]]>mapOfCounts[arr[index]]){
                mapOfCounts[tempVal]++;
            }else{
                cnt++;
            }
        }else{
            cnt++;
        }
    }
    int minVal = mapOfCounts[42];
    for(int i=1;i<6;i++){
        cnt+= mapOfCounts[arr[i]]-minVal;
    }
    cout << cnt << "\n";
    return 0;
}
static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
