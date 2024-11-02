#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::max;
int subSequencer(int index, string& s, vector<char>& vec){
    if(index==s.size()){
        if(!vec.empty()){
            int ab_count{0};
            int ba_count{0};
            for(int i=0;i<vec.size()-1;i++){
                if(vec[i]=='a' && vec[i+1]=='b'){
                    ab_count++;
                }else if(vec[i]=='b' && vec[i+1]=='a'){
                    ba_count++;
                }
            }
            if(ab_count==ba_count){
                return vec.size();
            }
        }
        return 0;
    }
    int maxSize = 0;
    vec.push_back(s[index]);
    maxSize = max(maxSize,subSequencer(index+1,s,vec));
    vec.pop_back();
    maxSize = max(maxSize,subSequencer(index+1,s,vec));
    return maxSize;
}
int main(int argc,char** argv){
    int t,sSize;
    cin >> t;
    string s;
    while(t>0){
        cin >> sSize;
        cin >> s;
        vector<char> store;
        int result = subSequencer(0, s, store);
        cout << result << "\n";
        t--;
    }
    return 0;
}
