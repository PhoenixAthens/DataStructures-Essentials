#include <vector>
using std::vector;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int totalSkillSum{0};
        int n = skill.size();
        vector<int> skillFreqCnt(1001,0);
        
        for(int i: skill){
            totalSkillSum+=i;
            skillFreqCnt[i]++;
        }
        if(totalSkillSum%(n/2)!=0)return -1;
        
        int targetSkillMatch = totalSkillSum/(n/2);
        int prod{0};
        for(int i: skill){
            int req = targetSkillMatch-i;
            if(skillFreqCnt[req]==0)return -1;
            prod+=(i*req);
            skillFreqCnt[req]--;
        }
        return prod;
    }
};
