#include <vector>
#include <map>
#include <iostream>
using std::cout;
using std::vector;
using std::map;
using std::distance;

int speedUp = [] {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mapOf;
        int b=0;
        for(vector<int>::iterator it = nums.begin(); it<nums.end(); it++){
            if(mapOf.find(*it)!=mapOf.end()){
                continue;
            }else{
                mapOf[*it]=1;
                nums[b]=*it;
                b++;
            }
            
        }
        return b;
    }
};

int main(int argc, char** argv){
    vector<int> vec{1,1,2};
    map<int,int> mapOfElems;
    mapOfElems[1]=5;
    mapOfElems[2]=9;
//    cout <<mapOfElems[0]<<"\n";
//    cout <<mapOfElems[1]<<"\n";
//    cout <<mapOfElems[2]<<"\n";
//    cout <<mapOfElems.count(10)<<"\n";
//    cout <<mapOfElems.count(1)<<"\n";
    
    cout <<(mapOfElems.find(0)!=mapOfElems.end())<<"\n";
    cout <<(mapOfElems.find(1)!=mapOfElems.end())<<"\n";
    cout <<(mapOfElems.find(2)!=mapOfElems.end())<<"\n";
    
    Solution s;
    vector<int> ve {1,1,2};
    cout << s.removeDuplicates(ve)<<"\n";
}
