#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <utility>
using std::cout;
using std::cin;
using std::unordered_map;
using std::vector;
using std::string;
using std::sort;
using std::pair;
//string ltrim(const string &str) {
//    string s(str);
//
//    s.erase(
//        s.begin(),
//        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//    );
//
//    return s;
//}
//
//string rtrim(const string &str) {
//    string s(str);
//
//    s.erase(
//        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//        s.end()
//    );
//    
//    return s;
//}

bool Comparator(vector<int> a, vector<int>b){
    if(a[1]>b[1])return true;
    else if(a[1]<b[1])return false;
    return true;
}

vector<vector<int>> groupSort(vector<int> arr) {
    unordered_map<int, int> mapMe;
    for(int i: arr){
        if(mapMe.find(i)!=mapMe.end()){
            mapMe[i]++;
        }else{
            mapMe[i]=1;
        }
    }
    vector<vector<int>> result;
    for(pair<int,int> a: mapMe){
        vector<int> insider{a.first,a.second};
        result.push_back(insider);
    }
    sort(result.begin(),result.end(),Comparator);
    return result;
}

int main()
{
    vector<int> inputs{3,3,1,2,1};
    groupSort(inputs);
//    ofstream fout(getenv("OUTPUT_PATH"));
//
//    string arr_count_temp;
//    getline(cin, arr_count_temp);
//
//    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));
//
//    vector<int> arr(arr_count);
//
//    for (int i = 0; i < arr_count; i++) {
//        string arr_item_temp;
//        getline(cin, arr_item_temp);
//
//        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));
//
//        arr[i] = arr_item;
//    }
//
//    vector<vector<int>> result = groupSort(arr);
//
//    for (int i = 0; i < result.size(); i++) {
//        for (int j = 0; j < result[i].size(); j++) {
//            fout << result[i][j];
//
//            if (j != result[i].size() - 1) {
//                fout << " ";
//            }
//        }
//
//        if (i != result.size() - 1) {
//            fout << "\n";
//        }
//    }
//
//    fout << "\n";
//
//    fout.close();
//
//    return 0;
}

