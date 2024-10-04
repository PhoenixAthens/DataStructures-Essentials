#include <iostream>
#include <queue>
#include <utility>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using std::priority_queue;
using std::string;
using std::cout;
using std::pair;
using std::map;
using std::set;
using std::vector;
using std::sort;

map<string,int> map1;


bool comp(string a, string b){
    if(map1[a] < map1[b])return true;
    else return false;
}
map<string,int> mapMain;
class AllOne {
private:
    
    static bool comp(string a, string b){
        if(mapMain[a] < mapMain[b])return true;
        else return false;
    }
public:
    vector<string> store;
    AllOne() {
        
    }
    
    void inc(string key) {
        if(mapMain.count(key)!=0){
            mapMain[key]++;
        }else{
            mapMain[key]=1;
            store.push_back(key);
        }
        
    }
    
    void dec(string key) {
        if(mapMain[key]==1){
            mapMain.erase(mapMain.find(key));
            sort(store.begin(),store.end(),comp);
            store.erase(store.begin());
        }else{
            mapMain[key]--;
        }
    }
    
    string getMaxKey() {
        if(store.size()==0)return "";
        sort(store.begin(),store.end(),comp);
        return store[store.size()-1];
    }
    
    string getMinKey() {
        if(store.size()==0)return "";
        sort(store.begin(),store.end(),comp);
        return store[0];
    }
};
int main(int argc, char** argv){
    priority_queue<pair<int,string>> pq;
    pq.push({1,"hello"});
    pq.push({5,"yellow"});
    pq.push({2,"lucas"});
    pq.push({1,"a"});
    cout << pq.top().first << "\n";
    
    
    map1.insert({"hello",1});
    map1.insert({"yellow",5});
    //map1.insert({"hello",1});
    //map1.insert({"lucas",2});
    //map1.insert({"a",1});
    
    vector<string> setOfStrings;
    setOfStrings.push_back("hello");
    setOfStrings.push_back("yellow");
    setOfStrings.push_back("");
    setOfStrings.push_back("hello");
    setOfStrings.push_back("");
    
    
    sort(setOfStrings.begin(),setOfStrings.end(),comp);
    for(string s: setOfStrings){
        cout << s << " ";
    }
    cout << "\n";
    
    cout << (map1["kl"]==NULL) << "\n";
    
    AllOne a;
    a.inc("hello");
    //    a.inc("hello");
    cout << a.getMaxKey() << "\n";
    cout << a.getMinKey() << "\n";
    //    a.inc("leet");
    //    
    //    cout <<"\n";
    //    cout << a.getMaxKey() << "\n";
    //    cout << a.getMinKey() << "\n";
    
    //    for(auto an: a.store){
    //        cout << an << " ";
    //        
    //    }
    
}
