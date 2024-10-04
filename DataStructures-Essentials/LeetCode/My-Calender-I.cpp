#include <vector>
#include <algorithm>
using std::vector;
using std::sort;

class MyCalendar {
private:
    vector<vector<int>> bookedEvents;
    //[[0,0],[47,50],[33,41],[25,32],
    
public:
    static bool comp(vector<int> a, vector<int> b){
        if(a[0]<b[0])return true;
        else return false;
    }
    MyCalendar() {
        vector<int> firstEvent {0,0};
        bookedEvents.push_back(firstEvent);
    }
    
    bool book(int start, int end) {
        for(vector<int> i: bookedEvents){
            if(!(start>=i[1] || end<=i[0])){
                return false;
            }
        }
        vector<int> event{start,end};
        bookedEvents.push_back(event);
        sort(bookedEvents.begin(),bookedEvents.end(),comp);
        return true;
    }
};
//[47,50],[33,41],[39,45],[33,42],[25,32],[26,35],[19,25],[3,8],[8,13],[18,27]

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
