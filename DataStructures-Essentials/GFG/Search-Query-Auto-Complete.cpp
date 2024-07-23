#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends
class AutoCompleteSystem {
    vector<string> sent;
    vector<int> times;
    int arr[28];
  public:

    AutoCompleteSystem(vector<string>& sentences, vector<int>& times) {
        this->sent = sentences;
        this->times = times;
    }

    vector<string> input(char c) {
        // write code to return the top 3 suggestions when the current character in the
        // stream is c c == '#' means , the current query is complete and you may save
        // the entire query into historical data
    }
};

/**
 * Your AutoCompleteSystem object will be instantiated and called as such:
 * AutoCompleteSystem* obj = new AutoCompleteSystem(sentences, times);
 * vector<string> param_1 = obj->input(c);
 */


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        vector<string> sentences(n);
        vector<int> times(n);
        for (int i = 0; i < n; ++i) {

            getline(cin, sentences[i]);
            cin >> times[i];
            cin.ignore();
        }
        AutoCompleteSystem *obj = new AutoCompleteSystem(sentences, times);
        int q;
        cin >> q;
        cin.ignore();

        for (int i = 0; i < q; ++i) {
            string query;
            getline(cin, query);
            string qq = "";
            for (auto &x : query) {
                qq += x;
                vector<string> suggestions = obj->input(x);
                if (x == '#')
                    continue;
                cout << "Typed : \"" << qq << "\" , Suggestions: \n";
                for (auto &y : suggestions) {
                    cout << y << "\n";
                }
            }
        }
    }
    return 0;
}

// } Driver Code Ends
