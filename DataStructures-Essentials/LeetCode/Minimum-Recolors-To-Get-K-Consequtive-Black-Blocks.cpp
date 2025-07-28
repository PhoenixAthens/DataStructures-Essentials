#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::min;
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int whites{0};
        int blacks{0};
        
        int i=0;
        for(;i<k;i++)
            if(blocks[i]=='W')whites++;
            else blacks++;
        
        int minWhites=whites;
        for(;i<blocks.size();i++){
            if(blocks[i-k]=='W'){
                whites--;
            }else{
                blacks--;
            }
            if(blocks[i]=='W'){
                whites++;
            }else{
                blacks++;
            }
            minWhites = min(minWhites,whites);
        }
        return minWhites;
    }
};
