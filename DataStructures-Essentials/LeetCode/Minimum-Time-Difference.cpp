#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cout;
using std::sort;
using std::string;
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> timePoints_converted;
        for(string i : timePoints){
            int hours{0};
            int j=0;
            for(;j<i.size();j++){
                if(i[j]==':'){
                    hours/=10;
                    j++;
                    break;
                }
                hours+=i[j]-'0';
                hours*=10;
            }
            int minutes{0};
            for(;j<i.size();j++){
                minutes+=i[j]-'0';
                minutes*=10;
            }
            minutes/=10;
            timePoints_converted.push_back(hours*60+minutes);
            
        }
        sort(timePoints_converted.begin(),timePoints_converted.end());
        for(int i: timePoints_converted){
            cout << i << " ";
        }
        cout << "\n";
        int res = 24 * 60 - timePoints_converted[timePoints_converted.size()-1] + timePoints_converted[0];
        
        for(int i=0;i<timePoints_converted.size()-1;i++){
            int calc = timePoints_converted[i+1]-timePoints_converted[i];
            if(calc<res)res=calc;
        }
        return res;
    }
};
int main(int argc, char** argv){
    Solution s;
    vector<string> vs {"00:00","23:59","00:00","10:10"};
    vector<string> vs2 {"01:01","02:01"};
    vector<string> vs3 {"12:12","12:13"};
    vector<string> vs4 {"12:12","00:13"};
    cout << s.findMinDifference(vs4);
}
