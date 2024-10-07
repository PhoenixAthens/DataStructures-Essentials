#include <iostream>
using std::string;
using std::cout;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n_s = s.size();
        int n_t = t.size();
        if(n_s!=n_t)return false;
        int arr[26]{0};
        for(char c: s){
            arr[c-'a']++;
        }
        
        for(char c: t){
            if(arr[c]==0)return false;
            arr[c-'a']--;
        }
        return true;
    }
};

int main(int argc, char** argv){
    string s = "hhbywxfzydbppjxnbhezsxepfexkzofxyqdvcgdvgnjbvihgufvgtuxtpioxgjuwawkbaerbsirrktcjcesepcocaglbassivfbjhikynfsvlbtkawstrclbkpuldshfgfvwjawownulsggsxhhqglbhjlgltfrqyjntgldlgorgatnjrsywlyngxrcwfojkmydmjbzuquqnzbpwlcbdzgdicctpkgtbdjgywkyrkityvohjbuvmzdfyicyplmrpygdhaeqbuxnehfybsysnnmzbhprsyjmtpcrzeqqbirofzjtlsyofdyeffkvpuhzaflwjfhnsuyryetjuajjnjwvlvrhvpenaarnzoafztixjrisfzdlepcwhxudjpsiirtofymnovacjmpdjtethjqfwduekczlqhsfjgqesyoxcfooagrdhyvsmssbhsclnlblhobvhwtpyftolneozlhbtjagpgqnnapktyevdvjfwdnbwsbelweoflhyhifprieuvfcdkavqxkygjlaegqfmzndgxbsccjgpclxmlpstrqjtqyvlqcopnahqvnpvkjimfdlosvletmamqjvotqwhadutmfvl";
    string t = "rmhdxtymfgxjluxmeeerhxrrtjgecmyfdhevakyosvvuwgbwmxiakbmtqjjpgctjojdqatuelqmfeldgoprxbzcylajhhjngqlmporofjpoyhrkptrbpzvvnkrqjovfzmmqybqxzjxarhguqcyvlugwmnzwtffanzuajraqbvjflgalgcwuhmrkblobybwouffzptbvkmwoklczfhvkqsirkqvhkryyxpkyfnwnjudvllmznupldkpoplwdlfzncwxdlgvgkehpcudqybnyhofpjnjmahnsrntxjtgocwsrnukejehwzxdetglgahdvzyypdztqwbnfrnytxprhtqjgobzjyewuasgnryjoyvwhdmemppixqcowgmicbmsukgodwgnsdieuqyzuysedmsphmritlqtnvnvfnmgnghxdsmmnzdhdalhfsfsppupteyrlajxrlbyqteaytgpsckottqnibbxhmkwuqfftwvibzsnaumsbohxeoaulsmwuvjcimscyqhtioekembdwfozglussscbzejqnvmcpfwdmxshhrkquacplctruyklkxcfovcbqllmyghdbkhdmawpmalrsgymg";
    Solution sol;
    cout << sol.isAnagram(s, t) << "\n";
    
}

