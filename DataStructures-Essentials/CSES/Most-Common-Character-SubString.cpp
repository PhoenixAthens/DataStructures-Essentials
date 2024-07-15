//#include <iostream>
#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::vector;
using std::ios_base;
using std::string;
int main(int argc, char** argv){
    //faster cin/cout
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    int n = s.length();
    
    vector<vector<int>> pref(n+1, vector<int>(26));
    //pref[5][0] = occurences of 'a' in s[0..4]
    for(int i = 0; i < n; i++){
        pref[i+1] = pref[i]; // copy all 26 values
        int char_id = s[i] - 'a'; // value 0..25
        pref[i+1][char_id]++;
    }
    
    //read queries
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int L, R;
        cin >> L >> R; //0-based
        char best_char = '?';
        int best_freq = -1;
        for(int char_id = 0; char_id < 26; char_id++){
            int freq = pref[R+1][char_id] - pref[L][char_id];
            if(freq > best_freq){
                best_freq = freq;
                best_char = 'a' + char_id;
            }
        }
        cout << best_char << "\n";
    }
}

