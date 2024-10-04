#include <vector>
#include <array>
using std::vector;
using std::array;
using std::max;
using std::min;

class MyCalendarTwo {
    vector<array<int,2>> no_events; //no = non-overlapping
    vector<array<int,2>> o_events; //o = overlapping
public:
    MyCalendarTwo() {
    }
    
    bool book(int start, int end) {
        for(array<int,2> arr: o_events){
            if(!(start >= arr[1] || end <= arr[0])){
                return false;
            }
        }
        for(array<int,2> arr: no_events){
            if(!(start >= arr[1] || end <= arr[0])){
                o_events.push_back({static_cast<int>(max(start,arr[0])),static_cast<int>(min(end,arr[1]))});
            }
        }
        no_events.push_back({start,end});
        return true;
    }
};
